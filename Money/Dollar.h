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
	Dollar(int amount);
	Dollar times(int multiplier);
	bool operator==(Dollar object)
		{
			bool ret = object.amount==this->amount;
			return ret;
		}
};

#endif /* MONEY_DOLLAR_H_ */
