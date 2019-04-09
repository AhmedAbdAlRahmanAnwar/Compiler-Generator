//
// Created by ahmed on 4/8/19.
//

#ifndef COMPILER_GENERATOR_ROW_H
#define COMPILER_GENERATOR_ROW_H

#include "DFAstate.h"
#include <map>

class Row {

public:
    Row(DFAstate* id_state);
    virtual ~Row(void);

    map<char,DFAstate> get_transitions(void);
    DFAstate* get_id_state(void);
    void insert_transition(char input_char, DFAstate s);
    DFAstate* get_destination_state(char ch);

private:
    /* attributes */
    DFAstate* id_state;
    map<char,DFAstate> transitions;
};


#endif //COMPILER_GENERATOR_ROW_H
