#ifndef BRAIN_H
#define BRAIN_H

#include <string>
using std::string;

class Brain {
private:
  string ideas[100];

public:
  Brain();
  Brain(const Brain &src);
  Brain &operator=(const Brain &src);
  ~Brain();
};

#endif
