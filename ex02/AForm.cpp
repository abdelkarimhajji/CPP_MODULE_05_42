/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:52:06 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/25 15:54:21 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("name"), signedStatus(false), gradeRequiredToSign(150), gradeRequiredToExecute(150)
{
}

AForm::AForm(const std::string &name, const int gradeRequiredToSign, const int gradeRequiredToExecute) : name(name), signedStatus(false), gradeRequiredToSign(gradeRequiredToSign),
                                                                                                         gradeRequiredToExecute(gradeRequiredToExecute)
{
    if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
        throw GradeTooHighException();
    if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
        throw GradeTooLowException();
}

AForm::~AForm()
{
}

AForm &AForm::operator=(const AForm &other)
{
    std::cout << "Form operator called" << std::endl;
    if (this != &other)
        this->signedStatus = other.signedStatus;
    return *this;
}

AForm::AForm(const AForm &other)
    : name(other.name),
      signedStatus(other.signedStatus),
      gradeRequiredToSign(other.gradeRequiredToSign),
      gradeRequiredToExecute(other.gradeRequiredToExecute)
{
}

std::string AForm::getName() const
{
    return this->name;
}

bool AForm::getSignedStatus() const
{
    return this->signedStatus;
}

int AForm::getGradeRequiredToSign() const
{
    return this->gradeRequiredToSign;
}

int AForm::getGradeRequiredToExecute() const
{
    return this->gradeRequiredToExecute;
}

void AForm::beSigned(Bureaucrat &burcrat)
{
    if (burcrat.getGrade() <= this->gradeRequiredToSign)
        this->signedStatus = true;
    else
        throw GradeTooLowException();
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade so low";
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade so High";
}

const char *AForm::NotSignedException::what() const throw()
{
    return "Form Not Signed";
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm)
{
    os << "AForm name: " << AForm.getName() << " Signed: " << (AForm.getSignedStatus() ? "Yes" : "No")
       << " Grade to sign: " << AForm.getGradeRequiredToSign() << " Grade to execute: " << AForm.getGradeRequiredToExecute();
    return os;
}