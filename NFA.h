//
// Created by ab_shams on 20/03/19.
//

#ifndef COMPILER_GENERATOR_NFA_H
#define COMPILER_GENERATOR_NFA_H

#include <vector>
#include "BasicNFA.h"
#include "NFACreator.h"
#include "Rule.h"

class NFA {
public:
    NFA();
    virtual ~NFA();
    BasicNFA* GenerateCompleteNFA(vector<Rule> all_rules);
};

#endif //COMPILER_GENERATOR_NFA_H
