
//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_CAT_H
#define CPP_MODULE_CAT_H

#include "Animal.h"

class Cat : public Animal{
public:
	Cat();
	Cat(Cat const &other);
	Cat& operator=(Cat const &other);
	~Cat();
};


#endif //CPP_MODULE_CAT_H
