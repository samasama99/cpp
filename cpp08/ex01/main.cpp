#include "Span.hpp"
#include <algorithm>
#include <exception>
#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>
#include <list>
int main() {

  std::cout << "FIRST TEST : \n";
  Span sp = Span(5);
  try {
    sp.longestSpan();
  } catch (std::exception &e) {
    std::cout << e.what() << '\n';
  }
  sp.addNumber(6);
  try {
    sp.shortestSpan();
  } catch (std::exception &e) {
    std::cout << e.what() << '\n';
  }
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  try {
  sp.addNumber(12);
  } catch (std::exception &e) {
    std::cout << e.what() << '\n';
  }
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  std::cout << "SECOND TEST : \n";
  Span test(5);
  std::vector<int> vec_int;
  vec_int.push_back(6);
  vec_int.push_back(3);
  vec_int.push_back(17);
  vec_int.push_back(9);
  vec_int.push_back(11);
  test.addNumber(vec_int);
  std::cout << test.shortestSpan() << std::endl;
  std::cout << test.longestSpan() << std::endl;

  std::cout << "THIRD TEST : \n";
  Span test2(5);
  std::list<int> list_int;
  list_int.push_back(6);
  list_int.push_back(3);
  list_int.push_back(17);
  list_int.push_back(9);
  list_int.push_back(11);
  test2.addNumber(list_int.begin(), list_int.end());
  std::cout << test2.shortestSpan() << std::endl;
  std::cout << test2.longestSpan() << std::endl;

  std::cout << "4TH TEST : \n";
  Span test3(test2);
  std::cout << test3.shortestSpan() << std::endl;
  std::cout << test3.longestSpan() << std::endl;

  std::cout << "5TH TEST : \n";
  Span test4(5);
  test4 = test3;
  std::cout << test4.shortestSpan() << std::endl;
  std::cout << test4.longestSpan() << std::endl;

  std::cout << "6TH TEST : \n";
  srand(time(NULL));
  Span test5(10000);
  for (int i = 0 ; i < 10000; ++i) {
    test5.addNumber(rand());
  }
  std::cout << test5.shortestSpan() << std::endl;
  std::cout << test5.longestSpan() << std::endl;

  std::cout << "7TH TEST : \n";
  srand(time(NULL));
  Span test6(10000);
  std::vector<int> tmp_vec;
  for (int i = 0 ; i < 10000; ++i) {
    tmp_vec.push_back(rand());
  }
  test6.addNumber(tmp_vec.begin(), tmp_vec.end());
  std::cout << test6.shortestSpan() << std::endl;
  std::cout << test6.longestSpan() << std::endl;

  std::cout << "8TH TEST : \n";
  try {
    Span test7(2);
    std::vector<int> tmp_vec_2;
    tmp_vec_2.push_back(6);
    tmp_vec_2.push_back(3);
    tmp_vec_2.push_back(17);
    tmp_vec_2.push_back(9);
    tmp_vec_2.push_back(11);

    test7.addNumber(tmp_vec_2.begin(), tmp_vec_2.end());
  } catch(std::exception &e) {
      std::cout << e.what() << '\n';
  }
  return 0;
}
