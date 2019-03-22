//
// Created by ab_shams on 20/03/19.
//

#ifndef COMPILER_GENERATOR_PARSER_H
#define COMPILER_GENERATOR_PARSER_H


#include <string>
#include <bits/unique_ptr.h>

class Parser {

    public:
        Parser(const istream& ifStream);
        bool hasNext();
        const string* next();
    private:
        istream ifStream;
        string line;

};


#endif //COMPILER_GENERATOR_PARSER_H
