//
// Created by ab_shams on 20/03/19.
//

#include "NFA.h"

NFA::NFA() {
    // TODO Auto-generated constructor stub
}

NFA::~NFA() {
    // TODO Auto-generated destructor stub
}


BasicNFA* NFA::GenerateCompleteNFA(vector<Rule> all_rules) {

    //list of all NFA graphs to be combined eventually
    vector<BasicNFA*> NFAs;

    //set the first ID of the sequence of states IDs
    ID_Generator::setCurrentID(1);

    //Build each Rule into NFA Graph at a time
    for(Rule rule : all_rules)
    {
        NFAs.push_back(NFACreator::build_BasicNFA(rule));
    }

    /*Combine all NFA Graphs into single NFA Graph*/

    /*
     *Pick one NFA to hold the final start and end state
     *Then add the remaining NFAs to it .
     */
    BasicNFA* FinalNFA = NFAs[0];

    //initialize start and end state for the final NFA Graph
    State* start = new State(ID_Generator::NextID());
    State* end = new State(ID_Generator::NextID());

    start->add_transition('\0', FinalNFA->get_start());
    FinalNFA->get_end()->add_transition('\0', end);
    FinalNFA->set_start(start);
    FinalNFA->set_end(end);

    //Combine the remaining NFAs to the NFA[0] Graph
    for( int i = 1 ; i < NFAs.size() ; i++ )
    {
        FinalNFA->get_start()->add_transition('\0', NFAs[i]->get_start());
        NFAs[i]->get_end()->add_transition('\0', FinalNFA->get_end());
    }
    return FinalNFA;
}