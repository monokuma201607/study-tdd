/*
 * Money.h
 *
 *  Created on: 2021/08/01
 *      Author: takes
 */

#ifndef STUDY_TDD_MONEY_MONEY_H_
#define STUDY_TDD_MONEY_MONEY_H_

class Money{
public:
	virtual ~Money(){}
	bool equals(const Money *money) const;
	bool operator==(Money object)
		{
			bool ret = object.amount==this->amount;
			return ret;
		}
protected:
	int amount;
static
	Money dollar(int amount);
	Money franc(int amount);
};



#endif /* STUDY_TDD_MONEY_MONEY_H_ */
