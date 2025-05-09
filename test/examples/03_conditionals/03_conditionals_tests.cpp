#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "if_else_if.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test AND truth table")
{
	REQUIRE((true and true) == true);
	REQUIRE((false && true) == false);
	REQUIRE((true && false) == false);
	REQUIRE((false && false) == false);
}

TEST_CASE("Test OR truth table")
{
	REQUIRE((true || true) == true);
	REQUIRE((false || true) == true);
	REQUIRE((true or false) == true);
	REQUIRE((false or false) == false);
}

TEST_CASE("Test NOT truth table")
{
	REQUIRE((not true) == false);
	REQUIRE((not false) == true);
}

TEST_CASE("Test is number in range")
{
	REQUIRE(is_number_in_range(1, 10, 0) == false);
	REQUIRE(is_number_in_range(1, 10, 5) == true);
	REQUIRE(is_number_in_range(1, 10, 11) == false);
}

TEST_CASE("Test is vowel")
{
	REQUIRE(is_vowel('a') == true);
	REQUIRE(is_vowel('e') == true);
	REQUIRE(is_vowel('i') == true);
	REQUIRE(is_vowel('o') == true);
	REQUIRE(is_vowel('u') == true);

	REQUIRE(is_vowel('b') == false);
	REQUIRE(is_vowel('m') == false);
}

TEST_CASE("Test is consonant")
{
	REQUIRE(is_consonant('b') == true);
	REQUIRE(is_consonant('c') == true);
	REQUIRE(is_consonant('d') == true);
	REQUIRE(is_consonant('x') == true);
	REQUIRE(is_consonant('z') == true);

	REQUIRE(is_consonant('a') == false);
	REQUIRE(is_consonant('e') == false);
}

TEST_CASE("Test is number even")
{
	REQUIRE(is_number_even(3) == false);
	REQUIRE(is_number_even(4) == true);
}

TEST_CASE("Test is number odd")
{
	REQUIRE(is_number_odd(2) == false);
	REQUIRE(is_number_odd(3) == true);
}

TEST_CASE("Test get generation if else if")
{
	REQUIRE(get_generation(2030) == "Invalid Year");
	REQUIRE(get_generation(1997) == "Centenial");
	REQUIRE(get_generation(1995) == "Millenial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby Boomer");
	REQUIRE(get_generation(1930) == "Silent Generation");
	REQUIRE(get_generation(1920) == "Greatest Generation");
	REQUIRE(get_generation(1800) == "Invalid Year");
}

TEST_CASE("Test menu option switch statement")
{
	REQUIRE(menu_option(0) == "Invalid Option");
	REQUIRE(menu_option(1) == "Option 1");
	REQUIRE(menu_option(2) == "Option 2");
	REQUIRE(menu_option(3) == "Option 3");
	REQUIRE(menu_option(4) == "Option 4");
	REQUIRE(menu_option(5) == "Invalid Option");

}