#include "Span.hpp"
#include <algorithm>
#include <climits>
#include <exception>
#include <iostream>
#include <iterator>
#include <stdexcept>

Span::Span() : vec(0), N(0){};

Span::Span(const unsigned int n) : vec(0), N(n){};

Span::~Span(){};

Span::Span(const Span &src) : vec(0), N(src.N) {
  vec.insert(vec.end(), src.vec.begin(), src.vec.end());
};

Span &Span::operator=(const Span &src) {
  if (this == &src)
    return *this;
  N = src.N;
  vec.insert(vec.end(), src.vec.begin(), src.vec.end());
  return *this;
};

void Span::addNumber(int x) {
  if (vec.size() == N)
    throw std::runtime_error("span is already full");
  vec.push_back(x);
};

int Span::shortestSpan() {
  if (vec.size() <= 1)
    throw std::runtime_error("no span can be found");

  int min = INT_MAX;
  for (unsigned long i = 0; i < vec.size(); ++i) {
    for (unsigned long j = i + 1; j < vec.size(); ++j) {
      min = (abs(vec[j] - vec[i]) < min) ? abs(vec[j] - vec[i]) : min;
    }
  }
  return min;
};

int Span::longestSpan() {
  if (vec.size() <= 1)
    throw std::runtime_error("no span can be found");
  return *std::max_element(vec.begin(), vec.end()) -
         *std::min_element(vec.begin(), vec.end());
};
