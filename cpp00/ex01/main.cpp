//
// Created by 大貫　弘貴 on 2022/06/13.
//
#include "PhoneBook.hpp"

int main(void) {
	PhoneBook phoneBook;
	int instructionNumber;

	std::cout << "input instruction (1.ADD, 2.SEARCH, 3.EXIT) >";
	std::cin >> instructionNumber;

	while (true) {
		switch (instructionNumber) {
			case 1 : {
				phoneBook.executeAdd();
				break;
			}
			case 2 : {
				phoneBook.executeSearch();
				break;
			}
			case 3 : {
				exit(0);
			}
			default : {
				std::cout << "invalid input!";
			}
		}
	}
}
