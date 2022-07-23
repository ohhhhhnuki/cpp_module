//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_DOG_H
#define CPP_MODULE_DOG_H

#include "Animal.h"

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog &other);
	Dog& operator=(const Dog &other);
	~Dog();
};


#endif //CPP_MODULE_DOG_H
