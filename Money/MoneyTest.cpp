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

TEST(Money, TestMultiplication)
{
	Dollar five = *(new Dollar(5));
	bool bIsSame = *(new Dollar(10)) == five.times(2);
	CHECK_TRUE(bIsSame);
	bIsSame = *(new Dollar(15)) == five.times(3);
	CHECK_TRUE(bIsSame);
}

TEST(Money, TestEquality_DollarTrue)
{
	Dollar *five = new Dollar(5);
	Dollar *test_five = new Dollar(5);
	bool bIsSame = five->equals(test_five);
	CHECK_TRUE(bIsSame);
}

TEST(Money, TestEquality_DollarFaulse)
{
	Dollar *five = new Dollar(5);
	Dollar *six = new Dollar(6);
	CHECK_FALSE(five->equals(six));
}

TEST(Money, TestEquality_for_FranTrue)
{
	Franc *five = new Franc(5);
	Franc *test_five = new Franc(5);
	CHECK_TRUE(five->equals(test_five));
}

TEST(Money, TestEquality_for_FranFaulse)
{
	Franc *five = new Franc(5);
	Franc *six = new Franc(6);
	bool bIsSame = five->equals(six);
	CHECK_FALSE(bIsSame);
}

TEST(Money, TestEquality_DollarandFranc)
{
	Franc *five = new Franc(5);
	Dollar *test_five = new Dollar(5);
	bool bIsSame = five->equals(test_five);
	CHECK_FALSE(bIsSame);
}


TEST(Money, TestEquality_DollarandFranc_test)
{
	std::shared_ptr<Dollar> dollar(new Dollar(10));
	std::shared_ptr<Franc> franc(new Franc(10));
#if 0
	std::cout << "MAIN" << std::endl;
	std::cout << "dollar : " << typeid(dollar.get()).name() << std::endl;
	std::cout << "franc  : " << typeid(franc.get()).name()  << std::endl;
	std::cout << "*dollar : " << typeid(*dollar.get()).name() << std::endl;
	std::cout << "*franc  : " << typeid(*franc.get()).name()  << std::endl;
#endif
	bool bIsSame = dollar->equals(franc.get());;
	CHECK_FALSE(bIsSame);
}

TEST(Money, TestFranMultiplication)
{
	Franc five = *(new Franc(5));
	bool bIsSame = *(new Franc(10)) == five.times(2);
	CHECK_TRUE(bIsSame);
	bIsSame = *(new Franc(15)) == five.times(3);
	CHECK_TRUE(bIsSame);
}
