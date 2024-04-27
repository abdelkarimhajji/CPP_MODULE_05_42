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
#include "Intern.hpp"

int main(void)
{
    // try
    // {
    //     Bureaucrat b("ahajji", 12);
    //     // Form f("Form", 5, -5);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // Create a bureaucrat with grade 137
// try
// {

// Bureaucrat bob("Bob", 120);

// // Create a shrubbery creation Form with target "home"
// ShrubberyCreationForm Form("home");

// // Bob signs the Form
// Form.beSigned(bob);

// // Bob executes the Form
// Form.execute(bob);
// }
// catch(const std::exception& e)
// {
//     std::cerr << e.what() << '\n';
// }
Intern intern;

    // Test creating a PresidentialPardonForm
    Form* form1 = intern.makeForm("PresidentialPardonForm", "Target1");
    if (form1 != NULL) {
        // Use form1
        delete form1;
    }

    // Test creating a RobotomyRequestForm
    Form* form2 = intern.makeForm("RobotomyRequestForm", "Target2");
    if (form2 != NULL) {
        // Use form2
        delete form2;
    }

    // Test creating a ShrubberyCreationForm
    Form* form3 = intern.makeForm("ShrubberyCreationForm", "Target3");
    if (form3 != NULL) {
        // Use form3
        delete form3;
    }

    // Test creating a form that doesn't exist
    Form* form4 = intern.makeForm("NonexistentForm", "Target4");
    if (form4 != NULL) {
        // This should not happen
        delete form4;
    }

    return 0;
}