//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_CLAPTRAP_H
#define CPP_MODULE_CLAPTRAP_H

#include <iostream>

class ClapTrap {
private:
	std::string name;
	int hitPoint;
	int energyPoint;
	int attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string &getName() const;
	int getHitPoint() const;
	int getEnergyPoint() const;
	int getAttackDamage() const;
	void setName(const std::string &name);
	void setHitPoint(int hitPoint);
	void setEnergyPoint(int energyPoint);
	void setAttackDamage(int attackDamage);
};

#endif //CPP_MODULE_CLAPTRAP_H