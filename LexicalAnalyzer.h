//
// Created by ab_shams on 20/03/19.
//

#ifndef COMPILER_GENERATOR_LEXICALANALYZER_H
#define COMPILER_GENERATOR_LEXICALANALYZER_H


#include <string>
#include <bits/unique_ptr.h>
#include "Token.h"

using namespace std;

class LexicalAnalyzer {

public:
    LexicalAnalyzer(string rulesFilePath, string srcFilepath);
    unique_ptr<Token> nextToken();

private:


};


#endif //COMPILER_GENERATOR_LEXICALANALYZER_H
