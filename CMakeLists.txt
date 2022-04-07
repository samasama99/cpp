cmake_minimum_required(VERSION 3.21)
project(cplus)

set(CMAKE_CXX_STANDARD 14)

include_directories(module00/ex01)
include_directories(module00/ex02)
include_directories(module01/ex00)
include_directories(module01/ex01)
include_directories(module01/ex03)
include_directories(module01/ex04)
include_directories(module01/ex05)
include_directories(module01/ex06)
include_directories(module02)

add_executable(cplus
        module00/ex00/megaphone.cpp
        module00/ex01/Contact.cpp
        module00/ex01/Contact.hpp
        module00/ex01/main.cpp
        module00/ex01/PhoneBook.cpp
        module00/ex01/PhoneBook.hpp
        module00/ex02/Account.cpp
        module00/ex02/Account.hpp
        module00/ex02/tests.cpp
        module01/ex00/main.cpp
        module01/ex00/newZombie.cpp
        module01/ex00/randomChump.cpp
        module01/ex00/Zombie.cpp
        module01/ex00/Zombie.hpp
        module01/ex01/main.cpp
        module01/ex01/Zombie.cpp
        module01/ex01/Zombie.hpp
        module01/ex01/zombieHorde.cpp
        module01/ex02/main.cpp
        module01/ex03/HumanA.cpp
        module01/ex03/HumanA.hpp
        module01/ex03/HumanB.cpp
        module01/ex03/HumanB.hpp
        module01/ex03/main.cpp
        module01/ex03/test.cpp
        module01/ex03/Weapon.cpp
        module01/ex03/Weapon.hpp
        module01/ex04/main.cpp
        module01/ex05/Harl.cpp
        module01/ex05/Harl.hpp
        module01/ex05/main.cpp
        module01/ex06/Harl.cpp
        module01/ex06/Harl.hpp
        module01/ex06/main.cpp
        module02/Fixed.cpp
        module02/Fixed.hpp
        module02/main.cpp)
