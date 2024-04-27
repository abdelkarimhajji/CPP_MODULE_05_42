/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:21:30 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/27 10:37:22 by ahajji           ###   ########.fr       */
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

    Form	*makeForm(const std::string form_to_create, const std::string target_for_form);

};

#endif