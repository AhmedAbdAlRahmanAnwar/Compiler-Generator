//
// Created by ahmed on 4/8/19.
//

#include "Row.h"
#include <iostream>

Row::Row(DFAstate* id_state)
{
    Row::id_state = id_state;
}

Row::~Row(void)
{
    // TODO Auto-generated destructor stub
}


void Row::insert_transition(char input, DFAstate state)
{
    transitions[input] = state;
}

map<char,DFAstate> Row::get_transitions(void)
{
    return transitions;
}

DFAstate* Row::get_id_state(void)
{
    return id_state;
}


DFAstate* Row::get_destination_state(char input){
    return &(transitions[input]);
}