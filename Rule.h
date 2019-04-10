//
// Created by ab_shams on 10/04/19.
//

#ifndef COMPILER_GENERATOR_RULE_H
#define COMPILER_GENERATOR_RULE_H

#include <string>
#include <vector>

using namespace std;

class Rule {


public:
    Rule (string lhs, vector<char> rhs, int ruleNum);

    Rule();

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
