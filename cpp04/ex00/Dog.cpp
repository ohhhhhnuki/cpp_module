//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "Dog.h"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
}