#ifndef PERSON_SERIALIZER__H__
#define PERSON_SERIALIZER__H__

#include <json.hpp>

#include "person.hpp"

void to_json(nlohmann::json & _data, const Person & _person)
{
    _data = nlohmann::json
    {
        {"name", _person.name},
        {"age", _person.age},
        {"weight", _person.weight}
    };
}

void from_json(const nlohmann::json & _data, Person & _person)
{
    _data.at("name").get_to(_person.name);
    _data.at("age").get_to(_person.age);
    _data.at("weight").get_to(_person.weight);
}

#endif
