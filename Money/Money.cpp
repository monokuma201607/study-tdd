/*
 * Money.cpp
 *
 *  Created on: 2021/08/01
 *      Author: takes
 */

#include "Money.h"


bool Money::equals(Money object){
	Money money = object;
	return amount == money.amount;
}
