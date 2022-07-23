//
// Created by 大貫　弘貴 on 2022/07/23.
//

#ifndef CPP_MODULE_WRONGCAT_H
#define CPP_MODULE_WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(WrongCat const &other);
	WrongCat& operator=(WrongCat const &other);
	~WrongCat();

	void makeSound() const;
};


#endif //CPP_MODULE_WRONGCAT_H
