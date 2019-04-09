//
// Created by ahmed on 4/8/19.
//

#include "DFAstate.h"

DFAstate::DFAstate() {
    // TODO Auto-generated constructor stub

}

DFAstate::~DFAstate() {
    // TODO Auto-generated destructor stub
}

void DFAstate::insert_new_state(State* new_state) {
    if(states_ids[new_state->get_id()] == 0){
        states.push_back(new_state);
        states_ids[new_state->get_id()] = 1;
    }
}


DFAstate* DFAstate::get_transition(char input) {
    DFAstate* result = new DFAstate();
    for(int index = 0; index < states.size(); index++){
        State* s = states[index];
        vector<State*> transitions = s->get_transition(input);
        for(State* next : transitions){
            result->insert_new_state(next);
        }
    }
    return result;
}


bool DFAstate::is_acceptance()
{
    for(State* s : states){
        if(s->is_acceptance()){
            return true;
        }
    }
    return false;
}


DFAstate* DFAstate::find_equivalent_states(DFAstate* start) {
    DFAstate* result = new DFAstate();
    queue<State*> q;
    for(State* s : start->get_states()){
        q.push(s);
    }
    while(!q.empty()){
        State* curr = q.front();
        q.pop();
        result->insert_new_state(curr);
        vector<State*> epsilon_transitions = curr->get_transition('\0');
        for(State* child : epsilon_transitions){
            if(!result->contain_state(child)){
                q.push(child);
            }
        }
    }
    return result;
}


vector<State*> DFAstate::get_states() {
    return states;
}


bool DFAstate::operator ==(DFAstate c){
    for(State* s : c.get_states()){
        if(states_ids[s->get_id()] == 0){
            return false ;
        }
    }
    return true ;
}

bool DFAstate::isNull(){
    return states.size() == 0;
}


vector<Rule> DFAstate::get_matched_rules(void) {
    vector<Rule> result;
    for(State* s : states){
        if(s->is_acceptance()){
            result.push_back(s->get_matched_rule());
        }
    }
    return result;
}


bool DFAstate::contain_state(State* s){
    return states_ids[s->get_id()] != 0;
}