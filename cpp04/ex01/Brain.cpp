//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "Brain.h"

Brain::Brain() {
	std::cout << "[Brain] Default constructor called." << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "[Brain] Copy constructor called." << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain &other) {
	std::cout << "[Brain] Copy assignment operator called." << std::endl;
	if (this != &other)
		for (int i = 0; i < 100; i++)
			this->idea[i] = other.idea[i];
	return *this;
}

Brain::~Brain() {
	std::cout << "[Brain] Destructor called." << std::endl;
}
