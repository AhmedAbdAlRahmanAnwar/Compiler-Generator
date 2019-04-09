//
// Created by ab_shams on 20/03/19.
//

#include "DFA.h"

DFA::DFA(BasicNFA* nfa) {
    // TODO Auto-generated constructor stub
    DFA::nfa = nfa;
    table_calculated_flag = false;
}

DFA::~DFA() {
    // TODO Auto-generated destructor stub

}


TransitionTable DFA::get_minimized_dfa_table(){

    if(table_calculated_flag)
    {
        return minimized_dfa_table;
    }
    table_calculated_flag = true;
    minimized_dfa_table = generate_minimized_dfa_table();
    return minimized_dfa_table;
}

TransitionTable DFA::generate_minimized_dfa_table(){

    //DFA table
    DFA_tableCreator tableCreator(nfa);
    TransitionTable dfa_table = tableCreator.generate_dfa_table();

    DFA_tableCreator object;
    //minimize DFA table
    dfa_table = object.minimize_dfa_table(dfa_table);
    return dfa_table;
}

