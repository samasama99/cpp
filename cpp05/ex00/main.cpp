#include "Bureaucrat.hpp"
using std::cout;

int main() {
  try
  {
      Bureaucrat a("a", 10);
      cout << a << '\n';
      cout << "geters : grade " << a.getGarde() << " name " << a.getName() << '\n';
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {
      cout << e.what() << '\n';
  }
  catch (Bureaucrat::GradeTooLowException &e)
  {
      cout << e.what() << '\n';
  }

  try
  {
      Bureaucrat b("b", 200);
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {
      cout << e.what() << '\n';
  }
  catch (Bureaucrat::GradeTooLowException &e)
  {
      cout << e.what() << '\n';
  }


  try
  {
      Bureaucrat b("b", 200);
  }
  catch (std::exception &e)
  {
      cout << e.what() << '\n';
  }

  try
  {
      Bureaucrat c("c", 1);
      cout << c << '\n';
      c.incrementGarde();
  }
  catch (Bureaucrat::GradeTooHighException &e)
  {
      cout << e.what() << '\n';
  }
  catch (Bureaucrat::GradeTooLowException &e)
  {
      cout << e.what() << '\n';
  }

}
