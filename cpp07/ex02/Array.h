//
// Created by 大貫　弘貴 on 2022/07/16.
//

#ifndef CPP_MODULE_ARRAY_H
#define CPP_MODULE_ARRAY_H

#include <iostream>

template <typename T>
class Array {
private:
	T* array;
	unsigned int arraySize;

public:
	Array() : arraySize(0) {
		std::cout << "[Array] Default constructor called." << std::endl;
		array = new T();
	};

	Array(unsigned int n) : arraySize(n) {
		std::cout << "[Array] Constructor called." << std::endl;
		array = new T[n]();
	}

	Array(const Array& other) {
		std::cout << "[Array] Copy constructor called." << std::endl;
		*this = other;
	}

	Array& operator=(const Array& other) {
		std::cout << "[Array] Copy assignment operator called." << std::endl;
		if (this != &other) {
			this->array = other.array;
			this->arraySize = other.arraySize;
		}
		return *this;
	}

	~Array() {
		std::cout << "[Array] Destructor called." << std::endl;
		delete[] array;
	}

	unsigned int size() {
		return this->arraySize;
	}
};


#endif //CPP_MODULE_ARRAY_H
