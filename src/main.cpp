#include <iostream>
#include <json.hpp>
#include <fstream>
#include <string>

#include "person.hpp"
#include "tcs/person_serializer.hpp"

int main(int, char **)
{
    Person p = {"Jhon", 24, 75.3};

    nlohmann::json j = p;

    std::cout << j << std::endl;

    std::ofstream output_file("out.json");
    output_file << j << std::endl;

    return 0;
}
