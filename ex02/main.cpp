 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:30:53 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/27 00:37:48 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
    // try
    // {
    //     Bureaucrat b("ahajji", 12);
    //     // AForm f("AForm", 5, -5);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // Create a bureaucrat with grade 137
try
{

Bureaucrat bob("Bob", 2);

// Create a shrubbery creation AForm with target "home"
RobotomyRequestForm AForm("home");
// RobotomyRequestForm RobotomyRequestForm("person");

// // Bob signs the AForm
AForm.beSigned(bob);
AForm.execute(bob);

// // Bob executes the AForm
// AForm.execute(bob);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
    return 0;
}