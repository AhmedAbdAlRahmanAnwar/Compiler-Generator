//
// Created by ahmed on 4/8/19.
//

#include "SubsetConstruction.h"

SubsetConstruction::SubsetConstruction(void)
{
    // TODO Auto-generated constructor stub

}

SubsetConstruction::SubsetConstruction(char identifier, vector<DFAstate*>states)
{
    this -> identifier = identifier ;
    this -> states = states ;
}

SubsetConstruction::~SubsetConstruction(void)
{
    // TODO Auto-generated destructor stub

}


bool SubsetConstruction::containState(DFAstate* s)
{
    for(DFAstate* i : states){
        if(*s == *i)
            return true ;
    }
    return false ;
}

void SubsetConstruction::set_identifier(char identifier)
{
    this -> identifier = identifier ;
}

char SubsetConstruction::get_identifier()
{
    return this -> identifier ;
}

vector<SubsetConstruction> SubsetConstruction::split()
{
    /* GATHER DIFFERENT IDS */
    set<string> ids ;
    for(string s : states_id)
    {
        ids.insert(s) ;
    }

    /* MAKE NEW PARTITIONS ACCORDING IDENTIFERS */
    vector<SubsetConstruction> res ;
    for(string s : ids){
        SubsetConstruction n_partition ;
        for(int i=0 ; i< (int) states_id.size() ; i++)
        {
            bool eq = true;
            if(states_id[i].size() != s.size()){
                eq = false;
                continue;
            }
            for(int index = 0; index < states_id[i].size(); index++){
                if(states_id[i][index] == '#' || s[index] == '#')continue;
                if(states_id[i][index] != s[index]){
                    eq = false;
                    break;
                }
            }
            if(eq) n_partition.add_state(states[i]) ;
        }
        res.push_back(n_partition) ;
    }

    return res ;
}

void SubsetConstruction::add_state(DFAstate* s)
{
    this -> states.push_back(s) ;
}

void SubsetConstruction::set_state_id(vector<string> states_id)
{
    this -> states_id = states_id ;
}

vector<DFAstate*> SubsetConstruction::get_states()
{
    return this -> states ;
}