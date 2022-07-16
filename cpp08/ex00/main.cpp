//
// Created by 大貫　弘貴 on 2022/07/16.
//
#include "easyfind.h"
#include <vector>

int main() {
	std::vector<int> testList;

	for (int i = 0; i < 10; i++)
		testList.push_back(i);

	std::cout << easyfind(testList, 4).operator*() << std::endl;
}