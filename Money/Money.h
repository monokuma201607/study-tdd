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
	//virtual ~Money(){}
	Money(int amount , std::string currency) : amount_(amount), currency_(currency) {};
	bool equals(std::shared_ptr<Money> money);
	virtual std::shared_ptr<Money> times(int multiplier) = 0;
	static std::shared_ptr<Money> dollar(const int amount);
	static std::shared_ptr<Money> franc(const int amount);
	std::string currency(){
		return currency_;
	}
protected:
	int amount_;
	std::string currency_;
};



#endif /* STUDY_TDD_MONEY_MONEY_H_ */
