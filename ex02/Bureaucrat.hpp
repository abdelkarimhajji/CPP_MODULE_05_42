/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:08 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/18 16:05:14 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT
#define BUREAUCRAT

#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
    protected:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &b);
        Bureaucrat& operator=(const Bureaucrat &b);
        const std::string getName() const;
        const int getGrade() const;
        void incrementGrade();
        void    decrementGrade();
        void signForm(Form& form);

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &b);

#endif