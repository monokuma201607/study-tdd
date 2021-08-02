/*
 * Franc.cpp
 *
 *  Created on: 2021/08/03
 *      Author: takes
 */



#include "Franc.h"

Franc::Franc(int amount) {
	this->amount = amount;
}


Franc Franc::times(int multiplier) {
	return *new Franc(amount * multiplier);
}
