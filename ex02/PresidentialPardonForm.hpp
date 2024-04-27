/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:46:44 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/26 12:02:18 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONForm_HPP
#define PRESIDENTIALPARDONForm_HPP

#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm(const std::string &target);
    virtual ~PresidentialPardonForm();

    void execute(Bureaucrat const & executor) const ;

private:
    std::string target;
};

#endif