//
// Created by 大貫　弘貴 on 2022/07/13.
//

#ifndef CPP_MODULE_ITER_H
#define CPP_MODULE_ITER_H

#include <iostream>

template<typename T>
void iter(T *array, int arrayLength, void (*f)(T &)) {
	for (int i = 0; i < arrayLength; i++)
		f(array[i]);
}

#endif //CPP_MODULE_ITER_H
