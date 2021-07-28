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
	int ans;
	Dollar five(5);
	Dollar product(5);
	product = five.times(2);
	ans = product.amount;
	CHECK_EQUAL(10, ans);
	product = five.times(3);
	ans = product.amount;
	CHECK_EQUAL(15, ans);
}

TEST(Money, TestEquality)
{
	Dollar *five = new Dollar(5);
	Dollar *product = new Dollar(6);
	Dollar *product1 = new Dollar(5);
	CHECK_TRUE(five->equals(*product1));
	CHECK_FALSE(five->equals(*product));
}
