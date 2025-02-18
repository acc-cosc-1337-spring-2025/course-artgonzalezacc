#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

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