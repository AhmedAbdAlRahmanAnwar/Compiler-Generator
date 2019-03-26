//
// Created by ahmed on 3/26/19.
//

#include "ID_Generator.h"

ID_Generator::ID_Generator()
{
    // TODO Auto-generated constructor stub

}

ID_Generator::~ID_Generator()
{
    // TODO Auto-generated destructor stub
}

int ID_Generator::NextID()
{
    return ID_Generator::number++;
}

void ID_Generator::setCurrentID(int number)
{
    ID_Generator::number = number;
}