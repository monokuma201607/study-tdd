/*
 * MoneyTest.cpp
 *
 *  Created on: 2021/07/25
 *      Author: takes
 */


#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "Money.h"
#include "Dollar.h"
#include "Franc.h"
#include <iostream>
#include <typeinfo>

/** Setup and Teardown per test group (optional) */
TEST_GROUP(Money)
{
	void setup()
	{

	}
	void teardown()
	{
	}
};


TEST(Money, TestMultiplication_dollarTest)
{
	std::shared_ptr<Money> five = Money::dollar(5);
	CHECK(Money::dollar(10)->equals(five->times(2)));
	CHECK(Money::dollar(15)->equals(five->times(3)));
}

TEST(Money, TestMultiplication_FrancTest)
{
	std::shared_ptr<Money> five = Money::franc(5);
	CHECK(Money::franc(10) ->equals(five->times(2)));
	CHECK(Money::franc(15) ->equals(five->times(3)));
}

TEST(Money, TestEquality_Dollar_test)
{
	bool bIsSame = Money::dollar(5)->equals(Money::dollar(5));
	CHECK_TRUE(bIsSame);
	bIsSame = Money::dollar(5)->equals(Money::dollar(6));
	CHECK_FALSE(bIsSame);
}

TEST(Money, TestEquality_Franc_test)
{
	bool bIsSame = Money::franc(5)->equals(Money::franc(5));
	CHECK_TRUE(bIsSame);
	bIsSame = Money::franc(5)->equals(Money::franc(6));
	CHECK_FALSE(bIsSame);
}

TEST(Money, TestEquality_DollarandFranc_test)
{
	bool bIsSame = Money::franc(5)->equals(Money::dollar(5));
	CHECK_FALSE(bIsSame);
}

TEST(Money, TestCurrency)
{
	CHECK_EQUAL("USD",Money::dollar(1)->currency());
	CHECK_EQUAL("CHF",Money::franc(1)->currency());
}
