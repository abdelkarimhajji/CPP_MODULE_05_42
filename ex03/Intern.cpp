/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 10:44:07 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/27 10:37:04 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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

        std::cout << "\033[33mIntern can not create a form called " << form_to_create << "\033[0m" << std::endl;
        return (NULL);
    }
