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
	void times(int multiplier);
};

#endif /* MONEY_DOLLAR_H_ */
