#include "Bureaucrat.hpp"
#include "Form.hpp"


int main() {
      Form form("form", 10, 10);

      Bureaucrat a("a", 10);
      Bureaucrat b("b", 15);
  
      b.signForm(form);
      std::cout << form << '\n';
      a.signForm(form);
      std::cout << form << '\n';

      try {
        Form f("x", 150, 250); 
      } catch (Form::GradeTooHighException &e) {
          std::cout << e.what() << '\n';
      } catch (Form::GradeTooLowException &e) {
          std::cout << e.what() << '\n';
      }

      try {
        Form f("x", 0, 250); 
      } catch (Form::GradeTooHighException &e) {
          std::cout << e.what() << '\n';
      } catch (Form::GradeTooLowException &e) {
          std::cout << e.what() << '\n';
      }
}
