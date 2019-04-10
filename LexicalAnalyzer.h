//
// Created by ab_shams on 20/03/19.
//

#ifndef COMPILER_GENERATOR_LEXICALANALYZER_H
#define COMPILER_GENERATOR_LEXICALANALYZER_H


#include <string>
#include <bits/unique_ptr.h>
#include "Token.h"
#include "Rule.h"
#include "TransitionTable.h"
#include "NFACreator.h"
#include "NFA.h"
#include "DFA.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <stack>
#include <vector>

using namespace std;

struct Regulars{
    string RHS;
    string LHS;
};

class LexicalAnalyzer {

public:
    LexicalAnalyzer(string rulesFilePath, string srcFilepath);
    void analyze();
    unique_ptr<Token> nextToken();
private:

    vector<Rule> rules;
    vector <struct Regulars> defs;
    vector <struct Regulars> exprs;
    string sfPath,rfPath;
    string SubDefIntoExpr(string str);
    string searchForDef(string str);
    string handleRHS(string str);
    string handleKeywords(string str);
    string handlePunctuations(string str);
    bool IsOperator(string C);
    bool HasHigherPrecedence(string op1, string op2);
    string InfixToPostfix(string str);
    void readRulesFile();
    void readSrcFile();
    void prepareRules();

    TransitionTable minimizedDFATable;

    void buildDFA();
};


#endif //COMPILER_GENERATOR_LEXICALANALYZER_H
