#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default") , grade(150) {};
Bureaucrat::~Bureaucrat(){};


Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name) , grade(src.grade) {};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rh) {
  if (this == &rh)
    return *this;
  this->grade = rh.grade;
  return *this;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
    if (grade > 150)    throw Bureaucrat::GradeTooLowException();
    if (grade < 1)      throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
};

void Bureaucrat::incrementGarde() {
    if (grade == 1)    throw Bureaucrat::GradeTooHighException();
    --grade;
};

void Bureaucrat::decrementGarde() {
    if (grade == 150)    throw Bureaucrat::GradeTooLowException();
    ++grade;
};

std::string Bureaucrat::getName() const {
  return name;
};

int Bureaucrat::getGarde() const {
  return grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
  os << b.getName();
  os << ", bureaucrat grade ";
  os << b.getGarde();
  return os;
};

