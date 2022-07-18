//
// Created by 大貫　弘貴 on 2022/06/14.
//

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce();
	void setName(const std::string &name);
};

Zombie* zombieHorde(int N, std::string name);


#endif
