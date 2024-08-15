/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:24:59 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/15 15:45:03 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm() {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robo) : AForm(robo), target(robo.target) {

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robo) {
    if (this != &robo)
        target = robo.target;
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm(target, 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!getSignedStatus())
        throw AForm::NotSignedException();
    if (executor.getGrade() > getGradeRequiredToExecute())
        throw AForm::GradeTooLowException();

    std::cout << "drilling noises ...\n";
    if (rand() % 2) {
        std::cout << target << " has been robotomized successfully.\n";
    } else {
        std::cout << "the robotomy on " << target << " failed.\n";
    }
}