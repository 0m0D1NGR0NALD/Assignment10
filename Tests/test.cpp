#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.h"

// double value_t1 = 1;
// double value_t2 = 5;

// TEST_CASE( "Tests_1", "Tests" ) {
//     REQUIRE( add_digits(value_t1,value_t2) == 6);
// }

// Define test cases using the TEST_CASE macro from Catch2.
TEST_CASE("BaseCharacter takeDamage and isAlive") {
    BaseCharacter character("TestCharacter", 100, 10, 5);

    SECTION("Character takes damage") {
        character.takeDamage(20);
        REQUIRE(character.getHealth() == 80);
    }

    SECTION("Character takes more damage than health") {
        character.takeDamage(120);
        REQUIRE(character.getHealth() == 0);
        REQUIRE_FALSE(character.isAlive());
    }

    SECTION("Character takes damage with defense") {
        character.takeDamage(8);
        REQUIRE(character.getHealth() == 92);
    }
}

TEST_CASE("PlayerCharacter performAction") {
    PlayerCharacter character("TestPlayerCharacter", 100, 10, 5);

    SECTION("Perform action and check damage") {
        double damage = character.performAction(1);
        REQUIRE(damage == 10);
    }
}

// Add more test cases for other classes

