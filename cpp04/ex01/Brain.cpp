#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
  for (int i = 0; i < 100; ++i) {
    ideas[i] = "";
  }
  std::cout << "Brain default constructor\n";
};

Brain::Brain(const Brain &src) {
  for (int i = 0; i < 100; ++i) {
    this->ideas[i] = src.ideas[i];
  }
  std::cout << "Brain copy constructor\n";
};

Brain &Brain::operator=(const Brain &src) {
  if (this == &src)
    return *this;
  for (int i = 0; i < 100; ++i) {
    this->ideas[i] = src.ideas[i];
  }
  return *this;
};

Brain::~Brain() { std::cout << "Brain default destructor\n"; }
