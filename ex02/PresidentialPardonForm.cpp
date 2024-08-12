/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:46:40 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/12 14:33:14 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm(target, 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!getSignedStatus())
        throw AForm::GradeTooLowException();
    else if (executor.getGrade() > getGradeRequiredToExecute())
        throw AForm::GradeTooLowException();

    std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}