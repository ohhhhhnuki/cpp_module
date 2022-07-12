//
// Created by 大貫　弘貴 on 2022/07/12.
//

#ifndef CPP_MODULE_B_H
#define CPP_MODULE_B_H

#include "Base.h"

class B : public Base {
public:
	B() {
		std::cout << "[B] default constructor called." << std::endl;
	}
};


#endif //CPP_MODULE_B_H
