//
// Created by ahmed on 4/8/19.
//

#include "TransitionTable.h"

TransitionTable::TransitionTable(void)
{
    // TODO Auto-generated constructor stub
}

TransitionTable::~TransitionTable(void)
{
    // TODO Auto-generated destructor stub
}

vector<DFAstate*> TransitionTable::acceptance_states()
{
    vector<DFAstate*> acceptance_States;
    for (Row* row : TransitionTableRows)
    {
        DFAstate* mainState = row->get_id_state();
        if(mainState->is_acceptance())
        {
            acceptance_States.push_back(mainState);
        }
    }
    return acceptance_States;
}

vector<DFAstate*> TransitionTable::non_acceptance_states()
{
    vector<DFAstate*> non_acceptance_states ;
    for (Row* row : TransitionTableRows)
    {
        DFAstate* mainState = row->get_id_state() ;
        if(!mainState->is_acceptance())
        {
            non_acceptance_states.push_back(mainState) ;
        }
    }
    return non_acceptance_states ;
}

void TransitionTable::insert_new_row (DFAstate* state)
{
    if(!row_found(state))
    {
        TransitionTableRows.push_back(new Row(state));
    }
}

void TransitionTable::add_row_transition (DFAstate* state, char input_char, DFAstate to_state)
{
    for (Row* r : this->TransitionTableRows)
    {
        if(*(r->get_id_state()) == *state)
        {
            r->insert_transition(input_char, to_state);
            break;
        }
    }
}


DFAstate* TransitionTable::get_start_state(void)
{
    return TransitionTableRows[0]->get_id_state();
}


bool TransitionTable::row_found(DFAstate* state)
{
    for(Row* r : this->TransitionTableRows)
    {
        if(*(r->get_id_state()) == *state)
        {
            return true ;
        }
    }
    return false ;
}

Row* TransitionTable::get_row(DFAstate* id)
{
    for(Row* i : TransitionTableRows){
        if(*(i->get_id_state()) == (*id)){
            return i ;
        }
    }
}

void TransitionTable::insert_new_row(Row* r)
{
    TransitionTableRows.push_back(r);
}

TransitionTable TransitionTable::finalDFA_table(vector<SubsetConstruction> partitions)
{
    TransitionTable finaltable ;
    NFACreator nfaCreator;

    for(Row* r : TransitionTableRows){
        DFAstate* essential_state = get_partition_belong(partitions , r->get_id_state()).get_states()[0] ;
        /* STATE IS REDUNDANT */
        if(!(*(r->get_id_state()) == (*essential_state)))
            continue ;
        /* REPLACE ALL STATES IN ROW WITH THIER ESSENTIAL STATES */
        for(char c : nfaCreator.getAlphabet()){
            DFAstate* to = &((r->get_transitions())[c]);
            /* STATE TO NOT FOUND */
            if(to->get_states().empty())
                continue ;
            /* REPLACE STATE WITH IT'S ESSENTIAL */
            r->get_transitions()[c] = *(get_partition_belong(partitions , to).get_states()[0]) ;
        }
        /* ADD ROW TO EQU. TABLE */
        finaltable.insert_new_row(r) ;
    }
    return finaltable ;
}

DFAstate* TransitionTable::get_transition(DFAstate* id, char transition){
    return &(get_row(id)->get_transitions()[transition]);
}

SubsetConstruction TransitionTable::get_partition_belong(vector<SubsetConstruction> subsets, DFAstate* c)
{
    for (SubsetConstruction s : subsets){
        if(s.containState(c))
            return s ;
    }
//    return NULL;
}

DFAstate* TransitionTable::find_transition(DFAstate* from_state, char input)
{
    for(Row* r : TransitionTableRows)
    {
        if(*(r->get_id_state()) == (*from_state))
        {
            return r->get_destination_state(input);
        }
    }
//    return NULL;
}