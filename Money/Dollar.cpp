/*
 * Dollar.cpp
 *
 *  Created on: 2021/07/25
 *      Author: takes
 */

#include "Dollar.h"

Dollar::Dollar(int amount) {
	this->amount = amount;
}


void Dollar::times(int multiplier) {
	amount *=multiplier;
}

