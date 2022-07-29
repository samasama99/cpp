#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat {
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &src);
    Bureaucrat &operator=(const Bureaucrat &rh);


    void incrementGarde();
    void decrementGarde();
    std::string getName() const;
    int getGarde() const;
    
    class GradeTooHighException : public std::runtime_error {
      public:
        GradeTooHighException() : runtime_error("Grade is too high (1 - 150)"){};
    };

    class GradeTooLowException : public std::runtime_error {
      public:
        GradeTooLowException() : runtime_error("Grade is too low (1 - 150)"){};
    };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& dt);
#endif
