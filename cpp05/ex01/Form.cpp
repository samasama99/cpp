#include "Form.hpp"

Form::Form() : singed(false) , gradeSign(1), gradeExec(1) {};

Form::Form(std::string name, int gS, int gE) : name(name), singed(false), gradeSign(gS) , gradeExec(gE){
  if (gS < 1 || gE < 1) throw Form::GradeTooHighException();
  if (gS > 150 || gE > 150) throw Form::GradeTooLowException();
};

Form::Form(const Form &src)  : name(src.name), singed(src.singed), gradeSign(src.gradeSign) , gradeExec(src.gradeExec){};

Form::~Form() {};

const Form& Form::operator=(const Form &rh) {
  if (this == &rh)
    return *this;
  this->singed = rh.singed;
  return *this;
};

bool Form::getSign() const{
  return singed;
};

int Form::getGS() const {
  return gradeSign;
};

int Form::getGE() const {
  return gradeExec;
};


std::string Form::getName() const {
  return name;
};

void Form::beSigned(Bureaucrat b) {
    if (b.getGarde() > gradeSign) throw Form::GradeTooLowException();
    singed = true;
}

std::ostream& operator<<(std::ostream& os, const Form& f) {
  os << "(";
  os << f.getName() << " " << f.getGS() << " " << f.getGE() << " ";
  if (f.getSign())
    os << "signed";
  else
    os << "not signed";
  os << ")";
  return os;
};
