/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:46:16 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/26 12:03:43 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONForm_H
#define SHRUBBERYCREATIONForm_H

#include "AForm.hpp"

class ShrubberyCreationForm :  public AForm
{
    private:
        const std::string target;
    public:
        ShrubberyCreationForm(const std::string &target);
        virtual ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};

#endif