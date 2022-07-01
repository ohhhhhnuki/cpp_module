//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "Cat.h"

Cat::Cat() : Animal("Dog"){
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
}
