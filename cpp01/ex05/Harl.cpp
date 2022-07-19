//
// Created by 大貫　弘貴 on 2022/06/21.
//

#include "Harl.h"

Harl::Harl() {
	complains[0] = &Harl::debug;
	complains[1] = &Harl::info;
	complains[2] = &Harl::warning;
	complains[3] = &Harl::error;
	std::cout << "[Harl] constructor called." << std::endl;
}

Harl::~Harl() {
	std::cout << "[Harl] destructor called." << std::endl;
}

void Harl::complain( std::string level )
{
	int index = (level == "DEBUG") + (level == "INFO") * 2 + (level == "WARNING") * 3 + (level == "ERROR") * 4 - 1;

	(this->*complains[index])();
}

void Harl::debug() {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}