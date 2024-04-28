/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:46:44 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/28 16:10:39 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONForm_HPP
#define PRESIDENTIALPARDONForm_HPP

#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& presidential);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& presidential);
    PresidentialPardonForm(const std::string &target);
    virtual ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const ;

};

#endif