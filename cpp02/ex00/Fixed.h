//
// Created by 大貫　弘貴 on 2022/06/21.
//

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:
	int rawBits;
	static const int fractionalBits = 8;

public:
	Fixed();//constructor
	~Fixed();//destructor
	Fixed(const Fixed& fixed);//copy constructor
	Fixed& operator=(const Fixed& other);//代入演算子
	int getRawBits() const;
};


#endif
