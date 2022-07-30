//
// Created by 大貫　弘貴 on 2022/07/09.
//

#ifndef CPP_MODULE_DATA_H
#define CPP_MODULE_DATA_H

#include <iostream>

class Data {
private:
	std::string str;
public:
	Data();
	Data(std::string str);
	Data(const Data& other);
	Data& operator=(const Data &other);
	~Data();

	const std::string &getStr() const;
};

std::ostream &operator<<(std::ostream &os, const Data &data);
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif //CPP_MODULE_DATA_H
