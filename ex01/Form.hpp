/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:52:03 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/29 21:51:20 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool    signedStatus;
        const int  gardeRequiredToSign;
        const int  gardeRequiredToExecute;
    public:
        Form();
        ~Form();
        
        std::string getName() const;
        bool    getSignedStatus() const;
        int getGradeRequiredToSign() const;
        int getGradeRequiredToSign() const;

        void    beSigned(Bureaucrat& burcrat);
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw() {
                    return "Grade is too high";
                }
        };

        class  GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw() {
                    return "Grade is too low";
                }
        };
};