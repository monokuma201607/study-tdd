/*
 * Franc.h
 *
 *  Created on: 2021/08/03
 *      Author: takes
 */

#ifndef STUDY_TDD_MONEY_FRANC_H_
#define STUDY_TDD_MONEY_FRANC_H_

#include "Money.h"

class Franc : public Money {
public:
	Franc(int amount) : Money(amount,"CHF"){
		};
	virtual ~Franc(){};
	std::shared_ptr<Money> times(int multiplier) {
			//return std::shared_ptr<Money>(new Franc(amount * multiplier));
			return Money::franc(amount_ * multiplier);
		}
};

#endif /* STUDY_TDD_MONEY_FRANC_H_ */
