//
// Created by 大貫　弘貴 on 2022/06/13.
//
#include "PhoneBook.hpp"

int main(void) {
	PhoneBook phoneBook;
	int instructionNumber;

	while (true) {
		std::cout << std::endl << "****************[menu]****************" << std::endl;
		std::cout << "input instruction (1.ADD, 2.SEARCH, 3.EXIT, (4.VIEW)) > ";
		std::cin >> instructionNumber;

		switch (instructionNumber) {
			case 1 : {
				phoneBook.executeAdd();
				break;
			}
			case 2 : {
				phoneBook.executeSearch();
				break;
			}
			case 3 :
				exit(0);
			case 4 : {
				phoneBook.executeShowList();
				break;
			}
			default : {
				std::cout << "invalid input!" << std::endl;
			}
		}
	}
}
