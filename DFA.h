//
// Created by ab_shams on 20/03/19.
//

#ifndef COMPILER_GENERATOR_DFA_H
#define COMPILER_GENERATOR_DFA_H

#include "BasicNFA.h"
#include "TransitionTable.h"
#include "DFA_tableCreator.h"
#include "SubsetConstruction.h"

class DFA {

public:
    DFA(BasicNFA* nfa);
    virtual ~DFA(void);

    TransitionTable generate_minimized_dfa_table(void);
    TransitionTable get_minimized_dfa_table();


private:
    /* attributes */
    BasicNFA* nfa;
    bool table_calculated_flag;
    TransitionTable minimized_dfa_table;
};


#endif //COMPILER_GENERATOR_DFA_H
