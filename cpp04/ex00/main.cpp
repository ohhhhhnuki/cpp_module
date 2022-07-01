//
// Created by 大貫　弘貴 on 2022/07/01.
//
#include  <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " <<  std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	return (0);
}