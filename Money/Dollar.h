/*
 * Dollar.h
 *
 *  Created on: 2021/07/25
 *      Author: takes
 */

#ifndef MONEY_DOLLAR_H_
#define MONEY_DOLLAR_H_

class Dollar {
public:
	int amount;
	Dollar(int amount);
	Dollar times(int multiplier);
	bool equals(Dollar object);
};

#endif /* MONEY_DOLLAR_H_ */
