/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:52:06 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/15 15:56:31 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const Form &other)
    : name(other.name),
      signedStatus(other.signedStatus),
      gradeRequiredToSign(other.gradeRequiredToSign),
      gradeRequiredToExecute(other.gradeRequiredToExecute)
{
}

Form::~Form()
{
}

Form::Form() : name("name"), signedStatus(false), gradeRequiredToSign(150), gradeRequiredToExecute(150)
{
}

Form::Form(const std::string &name, const int gradeRequiredToSign, const int gradeRequiredToExecute) : name(name), signedStatus(false), gradeRequiredToSign(gradeRequiredToSign),
                                                                                                       gradeRequiredToExecute(gradeRequiredToExecute)
{
    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
        throw GradeTooHighException();
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
        throw GradeTooLowException();
}

Form &Form::operator=(const Form &other)
{
    std::cout << "Form operator called" << std::endl;
    if (this != &other)
        this->signedStatus = other.signedStatus;
    return *this;
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getSignedStatus() const
{
    return this->signedStatus;
}

int Form::getGradeRequiredToSign() const
{
    return this->gradeRequiredToSign;
}

int Form::getGradeRequiredToExecute() const
{
    return this->gradeRequiredToExecute;
}

void Form::beSigned(Bureaucrat &burcrat)
{
    if (burcrat.getGrade() <= this->gradeRequiredToSign)
        this->signedStatus = true;
    else
        throw GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade so low";
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade so High";
}

const char *Form::NotSignedException::what() const throw()
{
    return "Form Not Signed";
}
const char *Form::InvalidFormException::what() const throw()
{
    return "Invalid Form Exception";
}

std::ostream &operator<<(std::ostream &os, const Form &AForm)
{
    os << "AForm name: " << AForm.getName() << " Signed: " << (AForm.getSignedStatus() ? "Yes" : "No")
       << " Grade to sign: " << AForm.getGradeRequiredToSign() << " Grade to execute: " << AForm.getGradeRequiredToExecute();
    return os;
}