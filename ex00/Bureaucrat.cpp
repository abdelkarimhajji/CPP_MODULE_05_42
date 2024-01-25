/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:11 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/25 21:01:41 by ahajji           ###   ########.fr       */
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

const int Bureaucrat::getGarde() const
{
    return this->grade;
}

void    Bureaucrat::incrementGrade()
{
    if(grade <= 1)
        throw std::string("Grade too hight");
    else
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if(grade >= 150)
        throw std::string("Grade to low");
    else
        this->grade++;
}