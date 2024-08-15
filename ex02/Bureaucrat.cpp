/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:11 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/15 15:36:15 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : name(b.name), grade(b.grade)
{
}

void Bureaucrat::incrementGrade()
{
    if (grade <= 1)
        throw GradeTooHighException();
    else
        this->grade--;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
    this->grade = b.getGrade();
    return *this;
}

void Bureaucrat::decrementGrade()
{
    if (grade >= 150)
        throw GradeTooLowException();
    else
        this->grade++;
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade so low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade so High";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
    return os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
}

void Bureaucrat::signAForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeAForm(AForm const &AForm)
{
    try
    {
        AForm.execute(*this);
        std::cout << this->getName() << " executed " << AForm.getName() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << this->getName() << " couldn't execute " << AForm.getName() << " because " << e.what() << std::endl;
    }
}