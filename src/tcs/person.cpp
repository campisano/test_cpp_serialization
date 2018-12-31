#include "person.hpp"

bool Person::operator ==(const Person & _other) const
{
    return (
               name == _other.name &&
               age == _other.age &&
               weight == _other.weight);
}
