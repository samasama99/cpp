#include <array>
#include <vector>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main()
{
    std::cout << "vector test : \n";

    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(16);
    vec.push_back(4);

    if (!easyfind(vec, 4)) {
        std::cout << "not found\n";
    } else {
        std::cout << "found\n";
    }

//////////////////////////////////

    std::cout << "list test : \n";

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(16);
    lst.push_back(4);

    if (!easyfind(lst, 16)) {
        std::cout << "not found\n";
    } else {
        std::cout << "found\n";
    }

//////////////////////////////////

    std::cout << "array test : \n";

    std::array<int, 3> arr;
    arr[0] = 10;
    arr[1] = 16;
    arr[2] = 4;

    if (!easyfind(arr, 6)) {
        std::cout << "not found\n";
    } else {
        std::cout << "found\n";
    }
}
