#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify bank account get balance") 
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Verify bank account deposit")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.deposit(50);
	REQUIRE(account.get_balance() == 550);
}

TEST_CASE("Test bank account deposit with two different objects(variable)")
{
	BankAccount account1(500);
	REQUIRE(account1.get_balance() == 500);
	
	BankAccount account2(750);
	REQUIRE(account2.get_balance() == 750);

	account1.deposit(75);
	REQUIRE(account1.get_balance() == 575);

	account2.deposit(50);
	REQUIRE(account2.get_balance() == 800);

}

TEST_CASE("Test account withdraw")
{
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.deposit(50);
	REQUIRE(account.get_balance() == 550);
}

TEST_CASE("Test account withdraw with two account object(variable)")
{
	BankAccount account1(500);
	REQUIRE(account1.get_balance() == 500);

	BankAccount account2(750);
	REQUIRE(account2.get_balance() == 750);

	account1.deposit(75);
	REQUIRE(account1.get_balance() == 575);

	account2.deposit(50);
	REQUIRE(account2.get_balance() == 800);
}