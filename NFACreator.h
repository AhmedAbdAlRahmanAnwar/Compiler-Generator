//
// Created by ahmed on 3/23/19.
//

#ifndef COMPILER_GENERATOR_NFACREATOR_H
#define COMPILER_GENERATOR_NFACREATOR_H


#include "BasicNFA.h"
#include "Rule.h"
#include "State.h"
#include <vector>
#include <set>


class NFACreator {
public:
    NFACreator();
    virtual ~NFACreator();

    static set<char> getAlphabet();
    static void insertAlphabet(char ch);
    static BasicNFA* build_BasicNFA(Rule rule);
    static BasicNFA* PositiveClosureOperator(BasicNFA* BN);
    static BasicNFA* OROperator(BasicNFA* BN1, BasicNFA* BN2);
    static BasicNFA* KleeneClosureOperator(BasicNFA* BN1);
    static BasicNFA* ANDOperator(BasicNFA* BN1, BasicNFA* BN2);

private :
    static set<char> alpha;
};


#endif //COMPILER_GENERATOR_NFACREATOR_H
