#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H
#include "Form.hpp"
#include <string>

class ShrubberyCreationForm : public Form {
  private:
    ShrubberyCreationForm(); 
  public:
    ShrubberyCreationForm(std::string target); 
    ShrubberyCreationForm(const ShrubberyCreationForm &src); 
    ~ShrubberyCreationForm(); 

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rh);

    void execute(const Bureaucrat &b) const;
};
#endif
