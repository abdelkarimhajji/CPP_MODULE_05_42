/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:30:53 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/15 13:45:08 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat bob("Bob", 2);
        RobotomyRequestForm AForm("home");
        ShrubberyCreationForm AForm2("home3");
        AForm.beSigned(bob);
        AForm2.beSigned(bob);
        bob.executeAForm(AForm);
        bob.executeAForm(AForm2);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}