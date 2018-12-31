#include <catch.hpp>
#include <json.hpp>

#include "person.hpp"
#include "../tcs/person_serializer.hpp"

TEST_CASE(
    "person serialization")
{
    // arrange
    Person p1 = {"Jhon", 24, 75.3};
    nlohmann::json j = p1;

    // act
    Person p2 = j;

    // assert
    CHECK(p1 == p2);
}
