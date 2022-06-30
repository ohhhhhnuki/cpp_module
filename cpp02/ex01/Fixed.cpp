//
// Created by 大貫　弘貴 on 2022/06/22.
//

#include <cmath>
#include "Fixed.h"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	(void)other;
	return *this;
}

Fixed::Fixed(int number) {
	std::cout << "Int constructor called" << std::endl;
	this->rawBits = number * (1 << Fixed::fractionalBits);
}

Fixed::Fixed(float number) {
	std::cout << "Float constructor called" << std::endl;
	this->rawBits = static_cast<int>(std::roundf(number * (1 << Fixed::fractionalBits)));
}

int Fixed::toInt() const{
	return  this->rawBits / (1 << Fixed::fractionalBits);
}

float Fixed::toFloat() const{
	return static_cast<float>(this->rawBits) / (1 << Fixed::fractionalBits);
}

std::ostream &operator<<(std::ostream &ost, Fixed const &fixed)
{
	ost << fixed.toFloat();
	return ost;
}