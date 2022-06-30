//
// Created by 大貫　弘貴 on 2022/06/22.
//

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:
	int rawBits;
	static const int fractionalBits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed(int number);
	Fixed(float  number);
	Fixed &operator=(const Fixed &other);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &ost, Fixed const &fixed);

#endif
