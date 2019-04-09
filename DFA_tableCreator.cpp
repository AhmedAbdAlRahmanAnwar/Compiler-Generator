//
// Created by ahmed on 4/8/19.
//

#include "DFA_tableCreator.h"

DFA_tableCreator::DFA_tableCreator(BasicNFA* nfa)
{
    DFA_tableCreator::nfa = nfa;
}

DFA_tableCreator::DFA_tableCreator()
{

}

DFA_tableCreator::~DFA_tableCreator(void)
{

}


TransitionTable DFA_tableCreator::generate_dfa_table(void)
{
    queue<DFAstate*> q;
    TransitionTable table = TransitionTable();

    /* get table first entry */
    DFAstate* start_state = new DFAstate();
    start_state->insert_new_state(nfa->get_start());
    start_state = start_state->find_equivalent_states(start_state);
    q.push(start_state);

    while(!q.empty())
    {
        DFAstate* curr = q.front();
        q.pop();
        if(!table.row_found(curr))
        {
            /* add new row */
            table.insert_new_row(curr);
            /* get transitions of this new entry */
            for (char i : Alpha::getAlphabet()) {
                /* get states reachable by this state(s) when applying char i */
                DFAstate* to_state = curr->get_transition(i) ;
                if(!to_state->isNull())
                {
                    to_state = to_state->find_equivalent_states(to_state);
                    q.push(to_state) ;
                    table.add_row_transition(curr, i, *to_state);
                }
            }
        }
    }
    return table;
}

/* Remove equivalent states and modify table  */
TransitionTable DFA_tableCreator::minimize_dfa_table(TransitionTable dfa_table)
{
    /* SPLIT START STATES FROM END STATES */
    SubsetConstruction start_states('0', dfa_table.non_acceptance_states()) ;
    SubsetConstruction end_states('1', dfa_table.acceptance_states()) ;

    /* BUILD ALL PARTITIONS */
    vector<SubsetConstruction> partitions ;
    partitions.push_back(start_states) ;
    partitions.push_back(end_states) ;

    while(re_partition(&partitions, dfa_table));

    return dfa_table.finalDFA_table(partitions);
}


bool DFA_tableCreator::re_partition(vector<SubsetConstruction>* partitions , TransitionTable dfa_table )
{
    /* New Partition generated */
    vector<SubsetConstruction> n_partitions ;
    int numOfPartitions = (*partitions).size() ;

    /* GENERATE IDS FOR Partition */
    for (int i = 0 ; i < numOfPartitions ; i++){
        (*partitions)[i].set_identifier('0' + i) ;
    }
    for(SubsetConstruction p : *partitions){
        /* GENERATE IDENTIFIERS FOR PARTITION STATES */
        generate_partition_ids(*partitions , &p , dfa_table ) ;
        /* SPLIT PARTITION TO NEW PARTITIONS ACCORDING TO NEW IDENTIFIERS */
        vector<SubsetConstruction> to_add = p.split() ;
        /* ADD NEW PARTITIONS */
        for(SubsetConstruction n_p : to_add)
            n_partitions.push_back(n_p) ;
    }

    if(partitions->size() == n_partitions.size()){
        return false ;
    }

    partitions = &n_partitions ;

    return true ;
}


SubsetConstruction DFA_tableCreator::get_partition_belong(vector<SubsetConstruction> subsets, DFAstate* c)
{
    for (SubsetConstruction s : subsets){
        if(s.containState(c))
            return s ;
    }
    return NULL;
}


void DFA_tableCreator::generate_partition_ids(vector<SubsetConstruction> all_partitions ,
        SubsetConstruction* partition , TransitionTable dfa_table ){
    /* GET STATES OF THE PARTITION */
    vector<DFAstate*> states = partition -> get_states() ;
    /* NEW IDENTIFIERS FOR PARTITION STATES */
    vector<string> ids ;

    for(DFAstate* c : states){
        /* NEW IDENTIFIER FOR STATE i IN PARTITION */
        string id = "" ;
        /* ALPHABET */
        set<char> alpha = Alpha::getAlphabet();
        /* APPEND TO STATE ID PARTITION ID */
        for (char i : alpha ){
            /* GET STATE WILL GO TO IF STATE C TOOK I */
            DFAstate* to = dfa_table.get_transition(c , i) ;
            /* STATE TO IS NOT FOUND */
            if(to->get_states().empty()){
                id.push_back('#');
                continue;
            }
            /* GET PARTITION STATE TO BELONG TO */
            char partition_id = get_partition_belong(all_partitions,to).get_identifier() ;
            /* APPEND PARTITION ID TO STATE ID */
            id.push_back(partition_id) ;
        }
        ids.push_back(id);
    }

    /* SET IDS OF STATES */
    partition->set_state_id(ids) ;
}