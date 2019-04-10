//
// Created by ab_shams on 10/04/19.
//

#include <utility>
#include "Rule.h"

vector<char> Rule::getRHS() {
    return rhs;
}

string Rule::getLHS() {
    return lhs;
}

Rule::Rule(string lhs,vector<char> rhs, int ruleNum) {

    Rule::lhs = std::move(lhs);
    Rule::rhs = std::move(rhs);
    Rule::ruleNumber = ruleNum;
}

const int Rule::getRuleNumber() {
    return ruleNumber;
}

Rule::Rule() {}
