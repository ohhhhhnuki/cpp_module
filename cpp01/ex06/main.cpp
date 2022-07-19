//
// Created by 大貫　弘貴 on 2022/06/21.
//
#include "Harl.h"

int retLevelIndex(std::string level) {
	int index = (level == "DEBUG") + (level == "INFO") * 2 + (level == "WARNING") * 3 + (level == "ERROR") * 4;

	return index;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "invalid input." << std::endl;
		std::exit(1);
	}

	Harl harl;

	switch (retLevelIndex(argv[1])){
		case 1:
			harl.debug();
		case 2:
			harl.info();
		case 3:
			harl.warning();
		case 4:
			harl.error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}