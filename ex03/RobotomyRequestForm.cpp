/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:24:59 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/13 15:41:34 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form() {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robo) : Form(robo), target(robo.target) {

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robo) {
    if (this != &robo) {
        // Form::operator=(robo); 
        target = robo.target;  
    }
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : Form(target, 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!getSignedStatus())
        throw Form::GradeTooLowException();
    if (executor.getGrade() > getGradeRequiredToExecute())
        throw Form::GradeTooLowException();

    std::cout << "Drilling noises...\n";
    if (rand() % 2) {
        std::cout << target << " has been robotomized successfully.\n";
    } else {
        std::cout << "The robotomy on " << target << " failed.\n";
    }
}