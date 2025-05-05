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
}

TEST_CASE("Create v2 from get_vector return value")
{
	MyVector v2(3);
	v2 = get_my_vector();
}

TEST_CASE("TEST Add elements to Myvector with push back")
{
	MyVector v1(5);
	REQUIRE(v1.Capacity() == 5);

	v1.PushBack(3);

	REQUIRE(v1[0] == 3);
	REQUIRE(v1.Size() == 1);

	v1.PushBack(7);
	REQUIRE(v1[1] == 7);
	REQUIRE(v1.Size() == 2);

	v1.PushBack(9);
	REQUIRE(v1[2] == 9);
	REQUIRE(v1.Size() == 3);

	v1.PushBack(77);
	REQUIRE(v1[3] == 77);
	REQUIRE(v1.Size() == 4);

	v1.PushBack(8);
	REQUIRE(v1[4] == 8);
	REQUIRE(v1.Size() == 5);

// no segmentation error? why?(no error when going beyond cap and not reserve function)
	v1.PushBack(10);
	REQUIRE(v1[5] == 10);
	REQUIRE(v1.Capacity() == 10);
}*/

TEST_CASE("Test default constructor execture Reserve capacity == 0 if branch")
{
	MyVector v1;
	REQUIRE(v1.Capacity() == 0);
	REQUIRE(v1.Size() == 0);

	v1.PushBack(10);
	REQUIRE(v1.Capacity() == 8);
	REQUIRE(v1.Size() == 1);

}