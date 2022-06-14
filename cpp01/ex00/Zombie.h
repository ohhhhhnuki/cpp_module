//
// Created by 大貫　弘貴 on 2022/06/14.
//
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <sys/wait.h>

class Zombie {
private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

Zombie* newZonbie(std::string name);
void randomChump(std::string name);

#endif
