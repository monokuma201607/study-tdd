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
	Franc(int amount);
	Money times(int multiplier);
};

#endif /* STUDY_TDD_MONEY_FRANC_H_ */
