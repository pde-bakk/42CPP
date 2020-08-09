//
// Created by PdB on 8/9/2020.
//

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include "Form.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    if (grade <= 0)
        throw GradeTooHighException("Grade too high");
    else if (grade > 150)
        throw GradeTooLowException("Grade too low");
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        this->_name = other._name;
        this->_grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {

}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int         Bureaucrat::getGrade() const {
    return this->_grade;
}

void        Bureaucrat::increaseGrade() {
  if (this->_grade == 1)
      throw GradeTooHighException("Grade too high");
  this->_grade -= 1;
}

void        Bureaucrat::decreaseGrade() {
  if (this->_grade == 150)
    throw GradeTooLowException("Grade too low");
  this->_grade += 1;
}

void        Bureaucrat::signForm(const Form &form) {
  try {
    form.beSigned(this);
    std::cout << "bureaucrat " << this->_name << " signs "
              << form.getName() << "." << std::endl;
  }
  catch(std::exception& e) {
    std::cout << "bureaucrat " << this->_name << " cannot sign "
              << form.getName() << "because " << e.what() << std::endl;
  }
}

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& self) {
    out << "<" << self.getName() << ">, bureaucrat grade " << self.getGrade() << std::endl;
    return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char *what):
        std::runtime_error(what) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char *what):
        std::runtime_error(what) {}
