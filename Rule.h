//
// Created by ab_shams on 20/03/19.
//

#ifndef COMPILER_GENERATOR_RULE_H
#define COMPILER_GENERATOR_RULE_H


#include <string>
#include <bits/unique_ptr.h>
#include "DFA.h"

using namespace std;

struct RegularDef {
    string LHS;
    string RHS;
};

class Rule {

public:
    Rule (const int& RuleNum,const bool& isRegular);
    int getRuleNumber();
    bool isRegularExpr();
    void setDFA(const DFA& rDFA);
    virtual unique_ptr<DFA> getDFA();

private:
    const int ruleNumber;
    const bool isExpr;
    const DFA ruleDFA;
};


#endif //COMPILER_GENERATOR_RULE_H
