//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "Dog.h"

Dog::Dog() : Animal("Dog"), brain(new Brain()) {
	std::cout << "[Dog] Default constructor called." << std::endl;
}

Dog::Dog(const Dog &other) {
	std::cout << "[Dog] Copy constructor called." << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog &other) {
	std::cout << "[Dog] Copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "[Dog] Destructor called." << std::endl;
	delete this->brain;
}

void Dog::makeSound() const {
	std::cout << "type : " << type << " bowwow bowwow!" << std::endl;
}