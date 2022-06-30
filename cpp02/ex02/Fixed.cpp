//
// Created by 大貫　弘貴 on 2022/06/30.
//

#include "Fixed.h"
#include <iostream>

Fixed::Fixed() : _raw(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int n)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_raw = n * (1 << _point);
}

Fixed::Fixed(float n)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_raw = static_cast<int>(std::roundf(n * (1 << _point)));
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_raw = other.getRawBits();
	}
	return *this;
}

bool Fixed::operator==(Fixed const &other) const
{
	return this->_raw == other._raw;
}

bool Fixed::operator!=(Fixed const &other) const
{
	return this->_raw != other._raw;
}

bool Fixed::operator>(Fixed const &other) const
{
	return this->_raw > other._raw;
}

bool Fixed::operator>=(Fixed const &other) const
{
	return this->_raw >= other._raw;
}

bool Fixed::operator<(Fixed const &other) const
{
	return this->_raw < other._raw;
}

bool Fixed::operator<=(Fixed const &other) const
{
	return this->_raw <= other._raw;
}

Fixed Fixed::operator+(Fixed const &other) const
{
	Fixed res;
	res.setRawBits(this->_raw + other._raw);
	return res;
}

Fixed Fixed::operator-(Fixed const &other) const
{
	Fixed res;
	res.setRawBits(this->_raw - other._raw);
	return res;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed res(this->toFloat() * other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed &other) const
{
	if (other._raw == 0)
	{
		std::cerr << "Error: cannot be devided by zero" << std::endl;;
		return 0;
	}
	Fixed res(this->toFloat() / other.toFloat());
	return res;
}

Fixed& Fixed::operator++()
{
	++(this->_raw);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	this->operator++();
	return old;
}

Fixed& Fixed::operator--()
{
	--(this->_raw);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	this->operator--();
	return old;
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	return f1._raw <= f2._raw ? f1 : f2;
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	return f1._raw >= f2._raw ? f1 : f2;
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	return f1._raw <= f2._raw ? f1 : f2;
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	return f1._raw >= f2._raw ? f1 : f2;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member functioon called" << std::endl;
	return this->_raw;
}

void Fixed::setRawBits(const int raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

float Fixed::toFloat( void ) const
{
	return static_cast<float>(this->_raw) / (1 << _point);
}

int Fixed::toInt( void ) const
{
	return this->_raw / (1 << _point);
}

std::ostream &operator<<(std::ostream &ost, Fixed const &fixed)
{
	ost << fixed.toFloat();
	return ost;
}