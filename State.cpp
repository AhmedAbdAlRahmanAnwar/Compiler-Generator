//
// Created by ahmed on 3/23/19.
//

#include "State.h"

State::State(int id)
{
    acceptance_state = false;
    State::id = id;
}

State::~State()
{

}

int State::get_id(){
    return id;
}

void State::set_acceptance(bool value){
    acceptance_state = value;
}

bool State::is_acceptance(){
    return acceptance_state;
}

void State::add_transition(char input, State* to_state){

    transitions[input].push_back(to_state);
}

vector<State*> State::get_transition(char input){

    return transitions[input];
}

map<char, vector<State*> > State::getAllTransitions(){
    return transitions;
}

void State::set_matched_rule(Rule matched_rule){
    State::matched_rule = matched_rule;
}

Rule State::get_matched_rule(void){
    return matched_rule;
}

/*
bool State::operator==(const State s)
{

    return s.id == State::id;
}
*/