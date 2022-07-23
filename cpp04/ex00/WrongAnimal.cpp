//
// Created by 大貫　弘貴 on 2022/07/23.
//

#include "WrongAnimal.h"

WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << "[WrongAnimal] Constructor called." << std::endl;
}

WrongAnimal::WrongAnimal() {
	std::cout << "[WrongAnimal] Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << "[WrongAnimal] Copy Constructor called." << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &other)
{
	std::cout << "[WrongAnimal] Copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal] Destructor called." << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const{
	std::cout << "type : " << type << " I am WrongAnimal!" <<std::endl;
}