//
// Created by 大貫　弘貴 on 2022/07/16.
//

#ifndef CPP_MODULE_EASYFIND_H
#define CPP_MODULE_EASYFIND_H

#include <iostream>

template <typename T>
typename T::iterator easyfind(T container, int number) {
	return std::find(container.begin(), container.end(), number);
}

#endif //CPP_MODULE_EASYFIND_H
