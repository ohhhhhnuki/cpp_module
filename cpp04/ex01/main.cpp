//
// Created by 大貫　弘貴 on 2022/07/01.
//
#include <iostream>
#include "Brain.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	const Animal* i = new Dog();
	const Animal* j = new Cat();
	const Animal* k = new Dog();
	const Animal* l = new Dog();
	const Animal* m = new Cat();

	Animal animalList[] = {*i, *j, *k, *l, *m};
	for (int index = 0; index < 5; index++)
		animalList[index].makeSound();

	delete i;
	delete j;
	delete k;
	delete l;
	delete m;

	return (0);
}