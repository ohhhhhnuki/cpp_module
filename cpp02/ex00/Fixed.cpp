//
// Created by 大貫　弘貴 on 2022/06/21.
//

#include "Fixed.h"

Fixed::Fixed() {
	this->rawBits = 0;
}

Fixed::~Fixed() {}

int Fixed::getRawBits() {
	return this->rawBits;
}

void Fixed::setRawBits(const int raw) {
	this->rawBits = raw;
}

