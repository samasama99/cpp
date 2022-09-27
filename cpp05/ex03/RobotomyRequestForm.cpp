#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() 
  : Form("target", "RobotomyRequestForm", 72, 45) {};

RobotomyRequestForm::RobotomyRequestForm(std::string target)
  : Form(target, "RobotomyRequestForm", 72, 45) {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
  : Form(src.getTarget(), src.getName(), src.getGS(), src.getGE()) {};

RobotomyRequestForm::~RobotomyRequestForm() {}; 

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rh) {
  if (this == &rh)
    return *this;
  *this = rh; 
  return *this;
};

void RobotomyRequestForm::execute(const Bureaucrat &b) const {
  if (this->getSign() == false) throw Form::FormNotSigned();
  if (b.getGarde() > this->getGE()) throw Form::GradeTooLowException();
  srand(time(NULL));  
  if (rand() % 2)
    std::cout << getTarget() << " has been robotomized\n";
  else
    std::cout << getTarget() << " failed to robotomized\n";
};
