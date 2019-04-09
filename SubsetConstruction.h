//
// Created by ahmed on 4/8/19.
//

#ifndef COMPILER_GENERATOR_SUBSETCONSTRUCTION_H
#define COMPILER_GENERATOR_SUBSETCONSTRUCTION_H

#include <vector>
#include <set>
#include "DFAstate.h"


using namespace std ;

class SubsetConstruction {

public:

    SubsetConstruction(void);
    SubsetConstruction(char identifier , vector<DFAstate*> states);
    virtual ~SubsetConstruction(void);

    void add_state(DFAstate*);
    bool containState(DFAstate*);
    vector<SubsetConstruction> split();

    char get_identifier() ;
    vector<DFAstate*> get_states() ;
    void set_identifier(char identifier) ;
    void set_state_id(vector<string>) ;

private:

    vector<DFAstate*> states;
    /* IDENTIFIERS TO SPLIT STATES AFTER RE_SubsetConstruction*/
    vector<string> states_id ;
    char identifier ;
};


#endif
