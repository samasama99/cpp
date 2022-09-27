#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form {
  private:
    RobotomyRequestForm(); 
  public:
    RobotomyRequestForm(std::string target); 
    RobotomyRequestForm(const RobotomyRequestForm &src); 
    ~RobotomyRequestForm(); 

    RobotomyRequestForm &operator=(const RobotomyRequestForm &rh);

    void execute(const Bureaucrat &b) const;
};
