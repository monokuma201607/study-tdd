/*
 * Dollar.h
 *
 *  Created on: 2021/07/25
 *      Author: takes
 */

#ifndef MONEY_DOLLAR_H_
#define MONEY_DOLLAR_H_

#include "Money.h"

class Dollar : public Money{
public:
	Dollar(int amount) : Money(amount){
		};
	virtual ~Dollar(){};
	std::shared_ptr<Money> times(int multiplier) {
			return std::shared_ptr<Money>(new Dollar(amount * multiplier));
	}
};

#endif /* MONEY_DOLLAR_H_ */
