/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationAForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:46:16 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/25 15:54:21 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONAForm_H
#define SHRUBBERYCREATIONAForm_H

#include "AForm.hpp"

class ShrubberyCreationAForm :  public AForm
{
    private:
        const std::string target;
    public:
        ShrubberyCreationAForm(const std::string &target);
        virtual ~ShrubberyCreationAForm();
        void execute(Bureaucrat const & executor) const;
};

#endif