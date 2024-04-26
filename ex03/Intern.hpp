/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:21:30 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/26 10:20:01 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_H
#define Form_H

#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern
{
    public:
         // static functions for makeForm
    static Form	*makePresident(const std::string target)
    {
        return (new PresidentialPardonForm(target));
    }

    static Form	*makeRobot(const std::string target)
    {
        return (new RobotomyRequestForm(target));
    }

    static Form	*makeShrubbery(const std::string target)
    {
        return (new ShrubberyCreationForm(target));
    }


    Form	*Intern::makeForm(const std::string form_to_create, const std::string target_for_form)
    {
        Form *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
        std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

        for (int i = 0; i < 3; i++)
        {
            if (form_to_create == forms[i])
            {
                std::cout << "Intern creates " << form_to_create << " now" << std::endl;
                return (all_forms[i](target_for_form));
            }
        }

        std::cout << "\033[33mIntern can not create a form called " << form_to_create << "\033[0m" << std::endl;
        return (NULL);
    }

};

#endif