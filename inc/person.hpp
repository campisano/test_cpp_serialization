#ifndef PERSON__H__
#define PERSON__H__

#include <string>

struct Person
{
    std::string name;
    unsigned int age;
    double weight;

    bool operator ==(const Person & _other) const;
};

#endif
