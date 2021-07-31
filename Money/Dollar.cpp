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


Dollar Dollar::times(int multiplier) {
	return *new Dollar(amount * multiplier);
}

bool Dollar::equals(Dollar object){
	return amount == object.amount;
}

Franc::Franc(int amount) {
	this->amount = amount;
}


Franc Franc::times(int multiplier) {
	return *new Franc(amount * multiplier);
}

bool Franc::equals(Franc object){
	return amount == object.amount;
}

