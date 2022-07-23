//
// Created by 大貫　弘貴 on 2022/07/23.
//

#include "WrongCat.h"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "[WrongCat] Default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
	std::cout << "[WrongCat] Copy constructor called." << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat &other) {
	std::cout << "[WrongCat] Copy assignment operator called." << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "[WrongCat] Destructor called." << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "type : " << type << " mew mew!" << std::endl;
}
