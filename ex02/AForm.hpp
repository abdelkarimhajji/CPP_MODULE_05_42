/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:52:03 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/18 16:59:15 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AForm_H
#define AForm_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool    signedStatus;
        const int  gradeRequiredToSign;
        const int  gradeRequiredToExecute;
    public:
        AForm(const std::string &name, const int gradeRequiredToSign, const int gradeRequiredToExecute);
        ~AForm();
        
        std::string getName() const;
        bool    getSignedStatus() const; 
        int getGradeRequiredToSign() const;
        int getGradeRequiredToExecute() const;

        void    beSigned(Bureaucrat& burcrat);

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

std::ostream& operator<<(std::ostream& os, const AForm& Aform);

#endif