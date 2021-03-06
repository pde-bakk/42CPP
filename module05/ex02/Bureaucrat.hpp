//
// Created by PdB on 8/9/2020.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Form.hpp"
#include <stdexcept>
#include <string>

class Form;
class Bureaucrat {
public:
  Bureaucrat(const std::string &name, int grade);
  Bureaucrat(const Bureaucrat &other);
  Bureaucrat &operator=(const Bureaucrat &other);
  ~Bureaucrat();

  std::string getName() const;
  int getGrade() const;
  void increaseGrade();
  void decreaseGrade();
  void signForm(Form &form) const;
  void executeForm(const Form &form) const;

  class GradeTooHighException : public std::runtime_error {
  public:
    GradeTooHighException();
  };

  class GradeTooLowException : public std::runtime_error {
  public:
    GradeTooLowException();
  };

private:
  Bureaucrat();
  const std::string _name;
  int _grade;
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &self);

#endif // BUREAUCRAT_BUREAUCRAT_HPP
