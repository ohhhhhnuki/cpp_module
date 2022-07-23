//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_DOG_H
#define CPP_MODULE_DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog : public Animal{
private:
	Brain *brain;

public:
	Dog();
	Dog(const Dog &other);
	Dog& operator=(const Dog &other);
	~Dog();

	void makeSound() const;
};



#endif //CPP_MODULE_DOG_H
