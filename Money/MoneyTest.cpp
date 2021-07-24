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
	void teardown()
	{
	}
};


TEST(Money, TestMultiplication)
{
	Dollar five(5);
	five.times(2);
	CHECK_EQUAL(10, five.amount);
}
