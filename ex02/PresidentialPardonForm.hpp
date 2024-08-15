/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:46:44 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/15 07:22:47 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONForm_HPP
#define PRESIDENTIALPARDONForm_HPP


#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& presidential);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& presidential);
    PresidentialPardonForm(const std::string &target);
    ~PresidentialPardonForm();
    void execute(Bureaucrat const & executor) const ;

private:
    std::string target;
};

#endif