//
// Created by PdB on 8/9/2020.
//

#include "Form.hpp"
#include <iostream>
#include <stdexcept>
#include <string>

Form::Form(const std::string &name, int signgrade, int execgrade)
    : _name(name), _signgrade(signgrade), _execgrade(execgrade) {
  this->_signed = false;
  if (this->_signgrade <= 0 || this->_execgrade <= 0)
    throw Form::GradeTooHighException();
  if (this->_signgrade > 150 || this->_execgrade > 150)
    throw Form::GradeTooLowException();
}

Form::~Form() {}

std::string Form::getName() const { return this->_name; }

bool Form::getSigned() const { return this->_signed; }

int Form::getSigngrade() const { return this->_signgrade; }

int Form::getExecgrade() const { return this->_execgrade; }

void Form::beSigned(Bureaucrat const &bc) {
  if (this->_signed == true)
    throw AlreadySignedException();
  if (bc.getGrade() > this->getSigngrade())
    throw GradeTooLowException();
  this->_signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &self) {
  out << "Form " << self.getName() << ": signed?: " << self.getSigned()
      << ", signgrade: " << self.getSigngrade()
      << ", execgrade: " << self.getExecgrade() << "." << std::endl;
  return out;
}

Form::GradeTooHighException::GradeTooHighException() 
	: std::runtime_error("Grade too high") { }

Form::GradeTooLowException::GradeTooLowException() 
	: std::runtime_error("Grade too low") { }

Form::AlreadySignedException::AlreadySignedException() 
	: std::runtime_error("Form already signed") { }
