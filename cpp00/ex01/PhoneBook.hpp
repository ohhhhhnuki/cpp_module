//
// Created by 大貫　弘貴 on 2022/06/13.
//
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook{

private:
	Contact contactList[8];
	int headIndex;
	int insertIndex;
	std::string stringConverter(std::string string);

public:
	PhoneBook();
	~PhoneBook();
	void executeAdd();
	void executeSearch();
	void executeShowList();
};

#endif
