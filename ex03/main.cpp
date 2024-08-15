/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:36:45 by agimi             #+#    #+#             */
/*   Updated: 2024/08/15 20:00:00 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Bureaucrat	ay("karim", 50);
	Intern		internet;
	Form		*_form;

	// check dirved calsses forms are created execpt for the last one

	try
	{
		_form = internet.makeForm("robotomy request", "Alice");
		delete _form;
		_form = internet.makeForm("shrubbery creation", "Quentin");
		delete _form;
		_form = internet.makeForm("presidential pardon", "Eliot");
		delete _form;
		_form = internet.makeForm("random request", "Julia");
		delete _form;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}

	return	(0);
}