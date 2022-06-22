//
// Created by 大貫　弘貴 on 2022/06/21.
//

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:
	int rawBits;
	static int fractionalBits;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& fixed);
	Fixed &operator=(const Fixed &other);
	int getRawBits() const;
	void setRawBits(int const raw);
};


#endif