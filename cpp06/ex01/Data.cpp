//
// Created by 大貫　弘貴 on 2022/07/09.
//

#include "Data.h"

Data::Data() {
	std::cout << "Data default constructor called." << std::endl;
}

Data::Data(std::string str) : str(str){
	std::cout << "Data constructor called." << std::endl;
}

Data::~Data() {
	std::cout << "Data destructor called." << std::endl;
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