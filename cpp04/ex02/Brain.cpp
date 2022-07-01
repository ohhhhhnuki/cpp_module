//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "Brain.h"

Brain::Brain() {
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called." << std::endl;
}

std::string* Brain::getIdea() {
	return this->idea;
}