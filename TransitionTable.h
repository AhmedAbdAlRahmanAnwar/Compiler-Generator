//
// Created by ahmed on 4/8/19.
//

#ifndef COMPILER_GENERATOR_TRANSITIONTABLE_H
#define COMPILER_GENERATOR_TRANSITIONTABLE_H

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include "DFAstate.h"
#include "Row.h"
#include "SubsetConstruction.h"

using namespace std;

class TransitionTable {

public:
    TransitionTable(void);
    virtual ~TransitionTable(void);

    vector<DFAstate*> acceptance_states();
    vector<DFAstate*> non_acceptance_states();
    void insert_new_row(DFAstate* state);
    void add_row_transition (DFAstate* state, char input_char, DFAstate to_state);
    bool row_found(DFAstate* state);
    TransitionTable finalDFA_table(vector<SubsetConstruction> subsets);
    DFAstate* get_transition(DFAstate* id, char transition);
    DFAstate* get_start_state(void);
    Row* get_row(DFAstate* id);
    void insert_new_row(Row* row);
    DFAstate* find_transition(DFAstate* from_state, char input);

private:

    vector<Row*> TransitionTableRows ;
    SubsetConstruction get_partition_belong(vector<SubsetConstruction> subsets, DFAstate* s);
};


#endif
