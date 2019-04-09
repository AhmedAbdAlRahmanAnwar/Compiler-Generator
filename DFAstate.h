//
// Created by ahmed on 4/8/19.
//

#ifndef COMPILER_GENERATOR_DFASTATE_H
#define COMPILER_GENERATOR_DFASTATE_H

#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include "State.h"
#include "Rule.h"
#include "ID_Generator.h"

using namespace std;

class DFAstate {

public:
    DFAstate();
    virtual ~DFAstate();

    void insert_new_state(State* new_state);
    DFAstate* get_transition(char input);

    /* this function return all equivalent states to start DFA state. */
    DFAstate* find_equivalent_states(DFAstate* start);

    vector<State*> get_states();
    bool is_acceptance();
    bool isNull();
    bool operator ==(DFAstate c);
    bool contain_state(State* s);

    vector<Rule> get_matched_rules(void);

private:
    vector<State*> states;
    //unordered_map is an associated container
    //that stores elements formed by combination of key value and a mapped value.
    unordered_map<int,int> states_ids;

};


#endif //COMPILER_GENERATOR_DFASTATE_H
