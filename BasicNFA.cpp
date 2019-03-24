//
// Created by ahmed on 3/23/19.
//

#include "BasicNFA.h"

BasicNFA::BasicNFA(char basic_char){
    //Give number to the start state
    start = new State(NumberGenerator::getNextUniqueInt());
    //Give number to the end state which is next
    end = new State(NumberGenerator::getNextUniqueInt());
    start->add_transition(basic_char, end);
}


BasicNFA::~BasicNFA() {
    // TODO Auto-generated destructor stub
}


State* BasicNFA::get_start(){
    return start;
}

State* BasicNFA::get_end(){
    return end ;
}

void BasicNFA::set_start(State* start){
    BasicNFA::start = start ;
}

void BasicNFA::set_end(State* end){
    BasicNFA::end = end;
}