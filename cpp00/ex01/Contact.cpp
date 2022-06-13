//
// Created by 大貫　弘貴 on 2022/06/13.
//

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, bool darkestSecret) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() {
	return this->firstName;
}

std::string Contact::getLastName() {
	return this->lastName;
}

std::string Contact::getNickName() {
	return this->nickName;
}

//bool Contact::isDarkestSecret() {
//	return darkestSecret;
//}
