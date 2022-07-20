//
// Created by 大貫　弘貴 on 2022/06/21.
//
#include "Fixed.h"

int main() {
	Fixed a;
	std::cout << "-------separator-------" << std::endl;
	Fixed b( a );
	Fixed c;
	std::cout << "-------separator-------" << std::endl;
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}