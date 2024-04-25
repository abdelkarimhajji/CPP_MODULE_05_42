/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:24:59 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/25 15:54:21 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "RobotomyRequestAForm.hpp"

RobotomyRequestAForm::RobotomyRequestAForm(const std::string &target)
    : AForm(target, 72, 45), target(target) {}

RobotomyRequestAForm::~RobotomyRequestAForm() {}

void RobotomyRequestAForm::execute(Bureaucrat const & executor) const
{
    if (!getSignedStatus())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > getGradeRequiredToExecute())
        throw AForm::GradeTooLowException();

    std::cout << "Drilling noises...\n";
    if (rand() % 2) {
        std::cout << target << " has been robotomized successfully.\n";
    } else {
        std::cout << "The robotomy on " << target << " failed.\n";
    }
}