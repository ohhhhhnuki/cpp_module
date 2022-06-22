cmake_minimum_required(VERSION 3.22)
project(CPP_Module)

set(CMAKE_CXX_STANDARD 14)

include_directories(cpp00/ex01)
include_directories(cpp00/ex02)
include_directories(cpp01/ex00)
include_directories(cpp01/ex01)

add_executable(CPP_Module
        cpp00/ex00/magaphone.cpp
        cpp00/ex01/Contact.cpp
        cpp00/ex01/Contact.hpp
        cpp00/ex01/main.cpp
        cpp00/ex01/PhoneBook.cpp
        cpp00/ex01/PhoneBook.hpp
        cpp00/ex02/Account.cpp
        cpp00/ex02/Account.hpp
        cpp00/ex02/tests.cpp
        cpp01/ex00/main.cpp
        cpp01/ex00/newZombie.cpp
        cpp01/ex00/randomChump.cpp
        cpp01/ex00/Zombie.cpp
        cpp01/ex00/Zombie.h
        cpp01/ex01/main.cpp
        cpp01/ex01/Zombie.cpp
        cpp01/ex01/Zombie.h
        cpp01/ex01/zombieHorde.cpp cpp01/ex02/main.cpp cpp01/ex03/Weapon.cpp cpp01/ex03/Weapon.h cpp01/ex03/main.cpp cpp01/ex03/HumanA.cpp cpp01/ex03/HumanA.h cpp01/ex03/HumanB.cpp cpp01/ex03/HumanB.h cpp01/ex04/main.cpp cpp01/ex05/Harl.cpp cpp01/ex05/Harl.h cpp01/ex05/main.cpp cpp01/ex06/Harl.cpp cpp01/ex06/Harl.h cpp01/ex06/main.cpp cpp02/ex00/Fixed.cpp cpp02/ex00/Fixed.h cpp02/ex00/main.cpp cpp02/ex01/Fixed.cpp cpp02/ex01/Fixed.h cpp02/ex01/main.cpp)
