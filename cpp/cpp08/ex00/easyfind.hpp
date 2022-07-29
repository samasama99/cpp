#pragma once
#include <iterator>

template<typename T>
bool easyfind(const T &cont, int elem) {
    typename T::const_iterator it;
    for (it = cont.begin(); it != cont.end(); ++it) {
        if (*it == elem) return true;
    }
    return false;
}
