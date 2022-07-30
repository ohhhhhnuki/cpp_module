//
// Created by 大貫　弘貴 on 2022/07/12.
//

#ifndef CPP_MODULE_A_H
#define CPP_MODULE_A_H

#include "Base.h"

class A : public Base{
public:
	A() {
		std::cout << "[A] Default constructor called." << std::endl;
	}
	~A() {
		std::cout << "[A] Destructor called." << std::endl;
	}
};


#endif //CPP_MODULE_A_H
