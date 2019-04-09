//
// Created by ab_shams on 20/03/19.
//

#ifndef COMPILER_GENERATOR_RULE_H
#define COMPILER_GENERATOR_RULE_H


#include <string>
#include <bits/unique_ptr.h>
#include <vector>
#include "DFA.h"

using namespace std;


class Rule {

public:
    Rule (const string lhs, vector<char> rhs,const int ruleNum);
    string getLHS();
    vector<char> getRHS();
    const int getRuleNumber();
//    void setDFA(const DFA rDFA);
//    virtual unique_ptr<DFA> getDFA();

private:
    int ruleNumber;
    string lhs;
    vector<char> rhs;
//    unique_ptr<DFA> ruleDFA;
};


#endif //COMPILER_GENERATOR_RULE_H
