#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() 
  : Form("target", "PresidentialPardonForm", 25, 5) {};

PresidentialPardonForm::PresidentialPardonForm(std::string target)
  : Form(target, "PresidentialPardonForm", 25, 5) {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
  : Form(src.getTarget(), src.getName(), src.getGS(), src.getGE()) {};

PresidentialPardonForm::~PresidentialPardonForm() {}; 

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rh) {
  if (this == &rh)
    return *this;
  *this = rh; 
  return *this;
};

void PresidentialPardonForm::execute(const Bureaucrat &b) const {
  if (this->getSign() == false) throw Form::FormNotSigned();
  if (b.getGarde() > this->getGE()) throw Form::GradeTooLowException();
  std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
};
