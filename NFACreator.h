//
// Created by ahmed on 3/23/19.
//

#ifndef COMPILER_GENERATOR_NFACREATOR_H
#define COMPILER_GENERATOR_NFACREATOR_H


#include "BasicNFA.h"
#include <vector>
#include "Rule.h"


class NFACreator {
public:
    NFACreator();
    virtual ~NFACreator()();

    static BasicNFA* build_BasicNFA(Rule rule) ;
};


#endif //COMPILER_GENERATOR_NFACREATOR_H
