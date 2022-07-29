#include "iter.hpp"
#include <iostream>

void upper_case(char &c) {
    if (c <= 'z' && c >= 'a')
      c -= 32;
}

void pow2(int &n) {
    n *= n;
}

void printInt(const int &c) {
  std::cout << c << " ";
}

int main() {
    char s[6] = "hello"; 
    iter(s, 6, upper_case);
    std::cout << s << '\n';

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    iter(arr, 10, pow2);
    iter(arr, 10, printInt);
    std::cout << '\n';
}
