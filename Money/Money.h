/*
 * Money.h
 *
 *  Created on: 2021/08/01
 *      Author: takes
 */

#ifndef STUDY_TDD_MONEY_MONEY_H_
#define STUDY_TDD_MONEY_MONEY_H_

#include <iostream>
#include <typeinfo>
#include <memory>

class Money{
public:
	virtual ~Money(){}
	Money(int amount) : amount(amount) {};
	bool equals(std::shared_ptr<Money> money);
	virtual std::shared_ptr<Money> times(int multiplier) = 0;
	static std::shared_ptr<Money> dollar(const int amount);
	static std::shared_ptr<Money> franc(const int amount);
protected:
	int amount;
};



#endif /* STUDY_TDD_MONEY_MONEY_H_ */
