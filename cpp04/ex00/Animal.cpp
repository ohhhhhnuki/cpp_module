//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "Animal.h"

Animal::Animal(std::string type) : type(type) {
	std::cout << "[Animal] Constructor called." << std::endl;
}

Animal::Animal() {
	std::cout << "[Animal] Default constructor called." << std::endl;
}

Animal::Animal(Animal const &other)
{
	std::cout << "[Animal] Copy Constructor called." << std::endl;
	*this = other;
}

Animal& Animal::operator=(Animal const &other)
{
	std::cout << "[Animal] Copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "[Animal] Destructor called." << std::endl;
}

const std::string &Animal::getType() const {
	return type;
}

void Animal::makeSound() const{
	if (type == "Dog")
		std::cout << "bowwow bowwow" << std::endl;
	else if (type == "Cat")
		std::cout << "mew mew" << std::endl;
	else
		std::cout << "???????" <<std::endl;
}