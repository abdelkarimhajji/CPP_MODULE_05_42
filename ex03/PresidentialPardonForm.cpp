/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:46:40 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/28 16:11:06 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidential) : Form(presidential), target(presidential.target) {

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidential) {
    if (this != &presidential) {
        target = presidential.target;
    }
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : Form(target, 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!getSignedStatus())
        throw Form::GradeTooLowException();
    if (executor.getGrade() > getGradeRequiredToExecute())
        throw Form::GradeTooLowException();

    std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}