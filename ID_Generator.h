//
// Created by ahmed on 3/26/19.
//

#ifndef COMPILER_GENERATOR_ID_GENERATOR_H
#define COMPILER_GENERATOR_ID_GENERATOR_H


class ID_Generator {
public:
    ID_Generator();
    virtual ~ID_Generator();
    static void setCurrentID(int number);
    static int NextID();

    static int number;
};


#endif //COMPILER_GENERATOR_ID_GENERATOR_H
