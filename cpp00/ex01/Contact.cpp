//
// Created by 大貫　弘貴 on 2022/06/13.
//

#include "Contact.hpp"

Contact::Contact() {
	std::cout << "[Contact] default constructor called" << std::endl;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string darkestSecret)
				: firstName(firstName), lastName(lastName), nickName(nickName), darkestSecret(darkestSecret) {
	std::cout << "[Contact] constructor called." << std::endl;
}

Contact::~Contact() {
	std::cout << "[Contact] destructor called." << std::endl;
}

const std::string &Contact::getFirstName() const {
	return firstName;
}

const std::string &Contact::getLastName() const {
	return lastName;
}

const std::string &Contact::getNickName() const {
	return nickName;
}
