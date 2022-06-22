//
// Created by 大貫　弘貴 on 2022/06/21.
//

#include "Fixed.h"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->rawBits = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed) {
	std::cout << "Copy constructor called" << std::endl;
	this->rawBits = fixed.rawBits;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator calledCopy assignment operator called" << std::endl;
	(void)other;
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->rawBits;
}

void Fixed::setRawBits(const int raw) {
	this->rawBits = raw;
}

