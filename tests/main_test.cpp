#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "my_lib/my_lib.h"

SCENARIO("My_Class can add integers to itself", "[addition]")
{
    GIVEN("a my_class with initial value 5")
    {
        my_libs_namespace::my_class m(5);
        WHEN("nothing is done to the class")
        {
            THEN("the initial value shall be 5")
            {
                REQUIRE(m.value() == 5);

                AND_WHEN("a 4 is added")
                {
                    m.add(4);
                    THEN("the new value shall be 9")
                    {
                        REQUIRE(m.value() == 9);
                    }
                }
            }
        }
    }
}