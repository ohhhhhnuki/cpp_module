//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_ANIMAL_H
#define CPP_MODULE_ANIMAL_H

#include <iostream>
#include <cstring>

class Animal {
protected:
	std::string type;

public:
	Animal(std::string type);
	Animal();
	Animal(Animal const &other);
	Animal& operator=(Animal const &other);
	virtual ~Animal();
	const std::string &getType() const;

	virtual void makeSound() const = 0;
};


#endif //CPP_MODULE_ANIMAL_H
