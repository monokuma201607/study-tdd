/*
 * MoneyTest.cpp
 *
 *  Created on: 2021/07/25
 *      Author: takes
 */


#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "Dollar.h"

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

TEST(Money, TestMultiplication)
{
	Dollar five = *(new Dollar(5));
	bool bIsSame = *(new Dollar(10)) == five.times(2);
	CHECK_TRUE(bIsSame);
	bIsSame = *(new Dollar(15)) == five.times(3);
	CHECK_TRUE(bIsSame);
}

TEST(Money, TestEquality)
{
	Dollar *five = new Dollar(5);
	Dollar *six = new Dollar(6);
	Dollar *test_five = new Dollar(5);
	CHECK_TRUE(five->equals(*test_five));
	CHECK_FALSE(five->equals(*six));
}
