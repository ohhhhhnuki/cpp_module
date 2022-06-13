//
// Created by 大貫　弘貴 on 2022/06/13.
//
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	bool darkestSecret;

public:
	Contact(std::string firstName, std::string lastName, std::string nickName, bool darkestSecret);
	Contact();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
//	bool isDarkestSecret();

};

#endif
