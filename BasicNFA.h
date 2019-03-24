//
// Created by ahmed on 3/23/19.
//

#ifndef COMPILER_GENERATOR_BASICNFA_H
#define COMPILER_GENERATOR_BASICNFA_H

#include "State.h"

class BasicNFA {

public:
    BasicNFA(char character);
    virtual ~BasicNFA();

    /* setters and getters */
    void set_start(State* start);
    State* get_start();
    void set_end(State* start);
    State* get_end();

private:
    State *start;
    State *end;
};


#endif //COMPILER_GENERATOR_BASICNFA_H
