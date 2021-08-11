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
	virtual ~Dollar(){}
	Money * times(int multiplier);
};

#endif /* MONEY_DOLLAR_H_ */
