//
// Created by 大貫　弘貴 on 2022/07/12.
//

#ifndef CPP_MODULE_WHATEVER_H
#define CPP_MODULE_WHATEVER_H

#include <iostream>

template<typename T>
T min(T a, T b) {
	if (a > b)
		return b;
	else
		return a;
}


template<typename T>
T max(T a, T b) {
	if (a > b)
		return a;
	else
		return b;
}

template <typename T>
void swap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}





#endif //CPP_MODULE_WHATEVER_H
