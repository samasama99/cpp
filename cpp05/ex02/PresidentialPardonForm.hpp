#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include "Form.hpp"
#include <string>

class  PresidentialPardonForm : public Form {
  private:
    PresidentialPardonForm(); 
  public:
    PresidentialPardonForm(std::string target); 
    PresidentialPardonForm(const PresidentialPardonForm &src); 
    ~PresidentialPardonForm(); 

    PresidentialPardonForm &operator=(const PresidentialPardonForm &rh);

    void execute(const Bureaucrat &b) const;
};
#endif
