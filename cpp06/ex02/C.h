//
// Created by 大貫　弘貴 on 2022/07/12.
//

#ifndef CPP_MODULE_C_H
#define CPP_MODULE_C_H

#include "Base.h"

class C : public Base {
public:
	C() {
		std::cout << "[C] Default constructor called." << std::endl;
	}
	~C() {
		std::cout << "[C] Destructor called." << std::endl;
	}
};


#endif //CPP_MODULE_C_H
