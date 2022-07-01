//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "Animal.h"

Animal::Animal(std::string type) {
	std::cout << "Animal default constructor called." << std::endl;
	this->type = type;
}

Animal::Animal() {
	std::cout << "Aniaml true default constructor called." << std::endl;
}

//Animal::Animal(Animal const &other)
//{
//	std::cout << "Animal: Copy Constructor" << std::endl;
//	*this = other;
//}
//
//Animal &Animal::operator=(Animal const &other)
//{
//	if (this != &other)
//		this->type = other.type;
//	std::cout << "Animal: Assinataion Operator" << std::endl;
//	return *this;
//}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType() const{
	return type;
}

void Animal::makeSound() const{
	if (type == "Dog")
		std::cout << "one!!!" << std::endl;
	else if (type == "Cat")
		std::cout << "nya-!!!" << std::endl;
	else
		std::cout << "???????" <<std::endl;
}