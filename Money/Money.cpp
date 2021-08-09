/*
 * Money.cpp
 *
 *  Created on: 2021/08/01
 *      Author: takes
 */

#include "Money.h"
#include "Dollar.h"
#include "Franc.h"
#include <iostream>
#include <typeinfo>
#include <cxxabi.h>
// memory leaks
char* demangle(const char *demangle) {
    int status;
    return abi::__cxa_demangle(demangle, 0, 0, &status);
}


bool Money::equals(const Money* money) const{
#if 0
  std::cout << "EQUALS" << std::endl;
  std::cout << "this  : " << typeid(this).name()  << std::endl;
  std::cout << "money : " << typeid(money).name() << std::endl;
  std::cout << "*this  : " << typeid(*this).name()  << std::endl;
  std::cout << "*money : " << typeid(*money).name() << std::endl;
#endif
  return amount == money->amount &&
    typeid(*this) == typeid(*money);
}


Money dollar(int amount){
	return *(new Dollar(amount));
}

static Money franc(int amount){
	return *(new Franc(amount));
}
