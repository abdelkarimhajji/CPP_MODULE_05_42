/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:46:16 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/28 16:15:06 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONForm_H
#define SHRUBBERYCREATIONForm_H

#include "Form.hpp"

class ShrubberyCreationForm :  public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& shrubbery);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shrubbery);
        ShrubberyCreationForm(const std::string &target);
        virtual ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};

#endif