//
// Created by 大貫　弘貴 on 2022/07/23.
//

#ifndef CPP_MODULE_WRONGANIMAL_H
#define CPP_MODULE_WRONGANIMAL_H

#include <iostream>
#include <cstring>

class WrongAnimal {
protected:
	std::string type;

public:
	WrongAnimal(std::string type);
	WrongAnimal();
	WrongAnimal(WrongAnimal const &other);
	WrongAnimal& operator=(WrongAnimal const &other);
	virtual ~WrongAnimal();
	const std::string &getType() const;

	void makeSound() const;
};


#endif //CPP_MODULE_WRONGANIMAL_H
