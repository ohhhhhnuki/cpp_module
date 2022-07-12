//
// Created by 大貫　弘貴 on 2022/07/09.
//
#include <iostream>
#include "Data.h"

int main() {
	std::string name = "ohnuki";
	Data data("ohnuki");

	uintptr_t testSerialize = serialize(&data);
	Data* testDeserialize = deserialize(testSerialize);

	std::cout << testSerialize << std::endl;
	std::cout << testDeserialize << std::endl;
}