//
// Created by ab_shams on 20/03/19.
//

#ifndef COMPILER_GENERATOR_TOKEN_H
#define COMPILER_GENERATOR_TOKEN_H


#include <string>

using namespace std;

class Token {
    public:
        Token(const string& tokenType,const string& lexeme, const int& colNum);
        string* getTokenType();
        string* getLexeme();
        int* getColNum();
    private:
        string tokenType;
        string lexeme;
        int colNum;
};


#endif //COMPILER_GENERATOR_TOKEN_H
