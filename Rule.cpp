//
// Created by ab_shams on 20/03/19.
//

#include "Rule.h"

vector<char> Rule::getRHS() {
    return rhs;
}

string Rule::getLHS() {
    return lhs;
}

Rule::Rule(const string lhs, const vector<char> rhs, const int ruleNum) {

    Rule::lhs = lhs;
    Rule::rhs = rhs;
    Rule::ruleNumber = ruleNum;
}

const int Rule::getRuleNumber() {
    return ruleNumber;
}
