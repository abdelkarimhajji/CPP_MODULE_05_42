/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:11 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/25 15:48:34 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string &name, int garde)
{
    if(grade > 150 || grade < 1) 
        throw std::string("Grade is out of range");
    else
        this->grade = garde;
}