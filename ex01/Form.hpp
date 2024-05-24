/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:52:03 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/29 14:25:59 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Form_H
#define Form_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
    const std::string name;
    bool signedStatus;
    const int gradeRequiredToSign;
    const int gradeRequiredToExecute;

public:
    Form(const std::string &name, int gradeRequiredToSign, int gradeRequiredToExecute);
    ~Form();

    std::string getName() const;
    bool getSignedStatus() const;
    int getGradeRequiredToSign() const;
    int getGradeRequiredToExecute() const;

    void beSigned(Bureaucrat &bureaucrat);
    class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif