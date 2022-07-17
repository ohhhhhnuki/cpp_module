//
// Created by 大貫　弘貴 on 2022/06/13.
//

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : headIndex(0), insertIndex(0) {
	std::cout << "[PhoneBook] default constructor called." << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << "[PhoneBook] destructor called." << std::endl;
}

void PhoneBook::executeAdd() {
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string darkestSecret;

	std::cout << "input FirstName > ";
	std::cin >> firstName;
	std::cout << "input LastName > ";
	std::cin >> lastName;
	std::cout << "input NickName > ";
	std::cin >> nickName;
	std::cout << "input darkestSecret > ";
	std::cin >> darkestSecret;

	if (headIndex < 8) {
		contactList[headIndex] = Contact(firstName, lastName, nickName, darkestSecret);
		headIndex++;
	} else if (headIndex == 8 && insertIndex == 8) {
		insertIndex = 0;
		contactList[insertIndex] = Contact(firstName, lastName, nickName, darkestSecret);
		insertIndex++;
	} else if (headIndex == 8) {
		contactList[insertIndex] = Contact(firstName, lastName, nickName, darkestSecret);
		insertIndex++;
	}
}

void PhoneBook::executeSearch() {
	int rowIndex;

	std::cout << "input rowIndex > ";
	std::cin >> rowIndex;
	rowIndex--;

	if (rowIndex < this->headIndex && rowIndex >= 0) {
		std::cout << rowIndex + 1 << " | " << stringConverter(contactList[rowIndex].getFirstName()) << " | "
		<< stringConverter(contactList[rowIndex].getLastName()) << " | " << stringConverter(contactList[rowIndex].getNickName()) << std::endl;
	} else
		std::cout << "this rowIndex is out of range." << std::endl;
}

void PhoneBook::executeShowList() {
	int rowIndex = 0;

	while (rowIndex < this->headIndex) {
		std::cout << rowIndex + 1 << " | " << contactList[rowIndex].getFirstName() << " | "
			<< contactList[rowIndex].getLastName() << " | " << contactList[rowIndex].getNickName() << std::endl;
		rowIndex++;
	}
}

std::string PhoneBook::stringConverter(std::string string) {
	if (string.length() > 10)
		return string.substr(0, 9) + ".";
	else
		return string;
}