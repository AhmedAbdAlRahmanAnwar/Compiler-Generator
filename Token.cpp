//
// Created by ab_shams on 20/03/19.
//

#include "Token.h"


void Token::setAttribute(int a) {

    Token::attribute = a;
}

string Token::getTokenType() {
    return tokenType;
}

string Token::getLexeme() {
    return lexeme;
}

int Token::getAttribute() {
    return attribute;
}
//
//int *Token::getColNum() {
//    return colNum;
//}

Token::Token(string tokenType, string lexeme) {

    Token:: tokenType = tokenType;
    Token::lexeme = lexeme;
//    Token::colNum = &colNum;

}
