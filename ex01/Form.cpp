/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:52:06 by ahajji            #+#    #+#             */
/*   Updated: 2024/02/10 10:17:24 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    
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