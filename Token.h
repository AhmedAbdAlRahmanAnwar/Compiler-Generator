//
// Created by ab_shams on 20/03/19.
//

#ifndef COMPILER_GENERATOR_TOKEN_H
#define COMPILER_GENERATOR_TOKEN_H


#include <string>

using namespace std;

class Token {
    public:
        Token(string tokenType, string lexeme);
        void setAttribute(int a);
        string getTokenType();
        string getLexeme();
        int getAttribute();
//        int* getColNum();
    private:
        string tokenType;
        string lexeme;
        int attribute;
//        int* colNum;
};


#endif //COMPILER_GENERATOR_TOKEN_H
