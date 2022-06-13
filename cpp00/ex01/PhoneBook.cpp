//
// Created by 大貫　弘貴 on 2022/06/13.
//

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->headIndex = 0;
}

void PhoneBook::executeAdd() {
	std::string firstName;
	std::string lastName;
	std::string nickName;

	std::cout << "input FirstName > ";
	std::cin >> firstName;
	std::cout << "input LastName > ";
	std::cin >> lastName;
	std::cout << "input NickName > ";
	std::cin >> nickName;

	contactList[headIndex] = Contact(firstName, lastName, nickName, true);
	this->headIndex++;
}

void PhoneBook::executeSearch() {
	int rowNumber;

	std::cout << "input rowNumber > ";
	std::cin >> rowNumber;

	std::cout << rowNumber << " | " << contactList[rowNumber].getFirstName() << " | " << contactList[rowNumber].getLastName() \
		<< " | " << contactList[rowNumber].getNickName();
}
