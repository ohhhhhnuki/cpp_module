//
// Created by 大貫　弘貴 on 2022/07/13.
//
#include "iter.h"

template<typename T>
void printElement(T element) {
	std::cout << element <<  std::endl;
}

int main(void) {
	int array[] = {1, 2, 3, 4, 5};

	iter(array, 5, printElement);
}