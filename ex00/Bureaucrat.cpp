/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:11 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/27 00:17:31 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string &name, int garde)
{
    if(grade > 150 || grade < 1) 
        throw std::string("Grade is out of range");
    else
        this->grade = garde;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string Bureaucrat::getName() const
{
    return this->name;
}

const int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : name(b.name), grade(b.grade)
{
    
}


void    Bureaucrat::incrementGrade()
{
    if(grade <= 1)
        throw std::string("Grade too hight");
    else
    this->grade--;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
    this->grade = b.getGrade();
    return *this;
}



void Bureaucrat::decrementGrade()
{
    if(grade >= 150)
        throw std::string("Grade to low");
    else
        this->grade++;
}
const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade so low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade so High";
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &b)
{
    return os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
}