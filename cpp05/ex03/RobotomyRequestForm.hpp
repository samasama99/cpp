#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H
#include "Form.hpp"
#include <string>

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
#endif
