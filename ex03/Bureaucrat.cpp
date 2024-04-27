/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:11 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/25 16:06:02 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if(grade > 150) 
        throw GradeTooLowException();
    else if(grade < 1)
        throw GradeTooHighException();
    else
        this->grade = grade;
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
        throw GradeTooHighException();
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
        throw GradeTooLowException();
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

void Bureaucrat::signAForm(AForm& AForm)
{
    if (AForm.getSignedStatus())
        std::cout << this->name << " signed " << AForm.getName();
    else
        std::cout << this->name << " couldn’t sign " << AForm.getName() << " because ";
}

void    Bureaucrat::executeAForm(AForm const & AForm)
{
    try {
        AForm.execute(*this);
        std::cout << getName() << " executed " << AForm.getName() << "\n";
    } catch (std::exception & e) {
        std::cout << "Error: " << e.what() << "\n";
    }
}