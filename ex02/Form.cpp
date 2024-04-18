/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:52:06 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/18 16:07:10 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(const std::string &name, const int gradeRequiredToSign, const int gradeRequiredToExecute) : 
name(name), signedStatus(false), gradeRequiredToSign(gradeRequiredToSign), 
gradeRequiredToExecute(gradeRequiredToExecute) 
{
     if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
        throw GradeTooHighException();
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
        throw GradeTooLowException();
}

Form::~Form()
{
    
}

std::string Form::getName() const
{
    return this->name;
}

bool    Form::getSignedStatus() const
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

void    Form::beSigned(Bureaucrat& burcrat)
{
    if(burcrat.getGrade() <= this->gradeRequiredToSign)
        this->signedStatus = true;
    else
        throw GradeTooLowException();
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Grade so low";
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade so High";
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form name: " << form.getName() << " Signed: " << (form.getSignedStatus() ? "Yes" : "No")
       << " Grade to sign: " << form.getGradeRequiredToSign() << " Grade to execute: " << form.getGradeRequiredToExecute();
    return os;
}