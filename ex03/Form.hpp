/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:52:03 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/13 15:55:26 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AForm_H
#define AForm_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool    signedStatus;
        const int  gradeRequiredToSign;
        const int  gradeRequiredToExecute;
    public:
        Form(const std::string &name, const int gradeRequiredToSign, const int gradeRequiredToExecute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        Form();
        virtual ~Form();
        std::string getName() const;
        bool    getSignedStatus() const; 
        int getGradeRequiredToSign() const;
        int getGradeRequiredToExecute() const;

        void    beSigned(Bureaucrat& burcrat);

        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        class  GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, const Form& AForm);

#endif