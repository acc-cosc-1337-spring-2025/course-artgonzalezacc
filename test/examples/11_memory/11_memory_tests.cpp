#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*
TEST_CASE("Function value, reference, and pointer parameters")
{
	int num1, num2, num3; 
	num1 = num2 = num3 = 0;

	func_params(num1, num2, &num3);

	REQUIRE(num1 == 0);
	REQUIRE(num2 == 10);
	REQUIRE(num3 == 15);

}

TEST_CASE("Test shallow class copy")
{
	MyVector v1(3);
	MyVector v2 = v1;
}

TEST_CASE("Test class copy assignment")
{
	MyVector v1(3);
	MyVector v2(3);
	v2 = v1;
}

TEST_CASE("Test my vector overwrite with std::move")
{
	MyVector v1(3);
	MyVector v2 = std::move(v1);
}*/

TEST_CASE("Create v2 from get_vector return value")
{
	MyVector v2(3);
	v2 = get_my_vector();
}