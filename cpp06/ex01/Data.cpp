//
// Created by 大貫　弘貴 on 2022/07/09.
//

#include "Data.h"

Data::Data() {
	std::cout << "[Data] Default constructor called." << std::endl;
}

Data::Data(std::string str) : str(str){
	std::cout << "[Data] Constructor called." << std::endl;
}

Data::Data(const Data &other) {
	std::cout << "[Data] Copy constructor called." << std::endl;
	*this = other;
}

Data& Data::operator=(const Data &other) {
	std::cout << "[Data] Copy assignment operator called." << std::endl;
	if (this != &other)
		this->str = other.str;
	return *this;
}

Data::~Data() {
	std::cout << "[Data] Destructor called." << std::endl;
}

const std::string &Data::getStr() const {
	return str;
}

std::ostream &operator<<(std::ostream &os, const Data &data) {
	os << "str: " << data.getStr();
	return os;
}

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}