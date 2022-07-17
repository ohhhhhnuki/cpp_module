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
	std::string darkestSecret;

public:
	Contact();
	Contact(std::string firstName, std::string lastName, std::string nickName, std::string darkestSecret);
	~Contact();
	const std::string &getFirstName() const;
	const std::string &getLastName() const;
	const std::string &getNickName() const;
};

#endif
