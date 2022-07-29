#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() 
  : Form("target", "ShrubberyCreationForm", 145, 137) {};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
  : Form(target, "ShrubberyCreationForm", 145, 137) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
  : Form(src.getTarget(), src.getName(), src.getGS(), src.getGE()) {};

ShrubberyCreationForm::~ShrubberyCreationForm() {}; 

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rh) {
  if (this == &rh)
    return *this;
  *this = rh; 
  return *this;
};

void ShrubberyCreationForm::execute(const Bureaucrat &b) const {
  if (this->getSign() == false) throw Form::FormNotSigned();
  if (b.getGarde() > this->getGE()) throw Form::GradeTooLowException();

  const std::string tree1 = "       _-_\n"; 
  const std::string tree2 = "    /~~   ~~\\\n"; 
  const std::string tree3 = "/~~         ~~\\\n"; 
  const std::string tree4 = "{               }\n"; 
  const std::string tree5 = " \\  _-     -_  /\n"; 
  const std::string tree6 = "   ~  \\ //  ~\n"; 
  const std::string tree7 = "_- -   | | _- _\n"; 
  const std::string tree8 = "  _ -  | |   -_\n"; 
  const std::string tree9 = "      // \\\n"; 

  std::ofstream f(this->getTarget() + "_shrubbery");
  if (f.is_open() == false) {
    std::string err("Bureaucrat : " + this->getTarget() + "_shrubbery ");
    perror(err.c_str());
    exit(1);
  }

  f << tree1 << tree2 << tree3;
  f << tree4 << tree5 << tree6;
  f << tree7 << tree8 << tree9;
};
