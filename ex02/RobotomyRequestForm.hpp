/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:46:28 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/13 12:49:02 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTForm_HPP
#define ROBOTOMYREQUESTForm_HPP


#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
    RobotomyRequestForm(const std::string &target);
    virtual ~RobotomyRequestForm();

    void execute(Bureaucrat const & executor) const ;

private:
    std::string target;
};

#endif 