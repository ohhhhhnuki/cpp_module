//
// Created by 大貫　弘貴 on 2022/07/01.
//
#include <iostream>
#include "Brain.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	const Animal* j = new Dog(new Brain);
	const Animal* i = new Cat(new Brain);
	const Animal* k = new Animal();

	delete j;
	delete i;

	return (0);
}