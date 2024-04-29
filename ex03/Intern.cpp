/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:44:07 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/29 11:35:03 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
}
Intern::Intern(const Intern& other) {
}
Intern::~Intern() {
}
Intern& Intern::operator=(const Intern& other) {
    std::cout << "Intern Assignation operator called" << std::endl;
    if (this == &other)
		return *this;
    return *this;
}
Form	*Intern::makeForm(const std::string form_to_create, const std::string target_for_form)
    {
        Form *all_forms[] = {new ShrubberyCreationForm(target_for_form), new RobotomyRequestForm(target_for_form), new PresidentialPardonForm(target_for_form)};
        std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

        for (int i = 0; i < 3; i++)
        {
            if (form_to_create == forms[i])
            {
                std::cout << "Intern creates " << form_to_create << " now" << std::endl;
                return (all_forms[i]);
            }   
        }

        std::cout << "Intern can not create a form called " << form_to_create << "\033[0m" << std::endl;
        return (NULL);
    }
