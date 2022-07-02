//
// Created by 大貫　弘貴 on 2022/07/02.
//

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>

class ICharacter;

class AMateria {
protected:
	std::string type;

public:
	AMateria(std::string const & type);
	AMateria();
	~AMateria();
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

#endif
