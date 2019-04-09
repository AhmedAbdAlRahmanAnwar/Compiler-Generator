//
// Created by ahmed on 4/8/19.
//

#ifndef COMPILER_GENERATOR_DFA_TABLECREATOR_H
#define COMPILER_GENERATOR_DFA_TABLECREATOR_H


#include "BasicNFA.h"
#include "TransitionTable.h"
#include "DFAstate.h"
#include "NFACreator.h"
#include "SubsetConstruction.h"
#include <algorithm>


class DFA_tableCreator
{
public:

    DFA_tableCreator(BasicNFA* nfa);
    DFA_tableCreator();
    virtual ~DFA_tableCreator(void);

    TransitionTable generate_dfa_table(void);

    /* Remove equivalent states and modify table  */
    TransitionTable minimize_dfa_table(TransitionTable dfa_table);

private:

    BasicNFA* nfa;
    bool re_partition(vector<SubsetConstruction>* subsets , TransitionTable dfa_table);
    void generate_partition_ids(vector<SubsetConstruction> all_partitions , SubsetConstruction* partition , TransitionTable dfa_table );
    SubsetConstruction get_partition_belong(vector<SubsetConstruction> partitions , DFAstate* c);
};



#endif //COMPILER_GENERATOR_DFA_TABLECREATOR_H
