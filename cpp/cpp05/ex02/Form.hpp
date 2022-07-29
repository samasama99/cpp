#ifndef FORM_H
#define FORM_H
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
  private:
    const std::string target;
    const std::string name;
    bool singed;
    const int gradeSign;
    const int gradeExec;

  private:
    Form();
  public:
    Form(std::string target, std::string name, int gS, int gE);
    Form(const Form &src);
    ~Form();

    const Form& operator=(const Form &rh);
    
    std::string getName() const;
    bool getSign() const;
    std::string getTarget() const;
    int getGS() const;
    int getGE() const;

    void beSigned(Bureaucrat const & b);
    virtual void execute(Bureaucrat const & b) const = 0;

    class GradeTooLowException : public std::runtime_error {
      public:
        GradeTooLowException() : runtime_error("Grade is not high enough") {};
    };

    class GradeTooHighException : public std::runtime_error {
      public:
        GradeTooHighException() : runtime_error("Grade is too high") {};
    };

    class FormNotSigned : public std::runtime_error {
      public:
        FormNotSigned() : runtime_error("Form is not signed") {};
    };
};

std::ostream& operator<<(std::ostream& os, const Form& f);
#endif
