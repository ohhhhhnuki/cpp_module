
//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_CAT_H
#define CPP_MODULE_CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal{
private:
	Brain *brain;

public:
	Cat();
	Cat(const Cat &other);
	Cat& operator=(const Cat &other);
	~Cat();

	void makeSound() const;
};


#endif //CPP_MODULE_CAT_H
