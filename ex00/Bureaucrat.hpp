/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:08 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/27 00:16:30 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
    protected:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string &name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &b);
        Bureaucrat& operator=(const Bureaucrat &b);
        const std::string getName() const;
        const int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        
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