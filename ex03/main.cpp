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
    
Intern intern;

    Form* form1 = intern.makeForm("PresidentialPardonForm", "Target1");
    if (form1 != NULL) {
        delete form1;
    }

    // Form* form2 = intern.makeForm("RobotomyRequestForm", "Target2");
    // if (form2 != NULL) {
        
    //     delete form2;
    // }

    // Form* form3 = intern.makeForm("ShrubberyCreationForm", "Target3");
    // if (form3 != NULL) {
        
    //     delete form3;
    // }

    // Form* form4 = intern.makeForm("nonexistentform", "Target4");
    // if (form4 != NULL) {
    //     delete form4;
    // }

    return 0;
}