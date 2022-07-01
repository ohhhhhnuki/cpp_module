//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "Dog.h"

Dog::Dog() : Animal("Dog"){
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(Brain* brain) {
	std::cout << "Dog brain constructor called." << std::endl;
	this->brain = brain;
}

Dog::~Dog() {
	std::cout << "Dog destructor called." << std::endl;
}