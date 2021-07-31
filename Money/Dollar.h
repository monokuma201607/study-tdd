/*
 * Dollar.h
 *
 *  Created on: 2021/07/25
 *      Author: takes
 */

#ifndef MONEY_DOLLAR_H_
#define MONEY_DOLLAR_H_

class Dollar {
private:
	int amount;
public:
	Dollar(int amount);
	Dollar times(int multiplier);
	bool equals(Dollar object);
	bool operator==(Dollar object)
		{
			bool ret = object.amount==this->amount;
			return ret;
		}
};

class Franc {
private:
	int amount;
public:
	Franc(int amount);
	Franc times(int multiplier);
	bool equals(Franc object);
	bool operator==(Franc object)
		{
			bool ret = object.amount==this->amount;
			return ret;
		}
};

#endif /* MONEY_DOLLAR_H_ */
