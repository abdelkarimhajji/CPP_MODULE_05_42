/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:46:16 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/15 07:42:15 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONForm_H
#define SHRUBBERYCREATIONForm_H

#include "AForm.hpp"

class ShrubberyCreationForm :  public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& shrubbery);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shrubbery);
        ShrubberyCreationForm(const std::string &target);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};

#endif