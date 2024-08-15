/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:46:28 by ahajji            #+#    #+#             */
/*   Updated: 2024/08/15 07:33:46 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTForm_HPP
#define ROBOTOMYREQUESTForm_HPP

#include <string>
#include "Form.hpp"
#include "Bureaucrat.hpp"


class RobotomyRequestForm : public Form
{
private:
    std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& robo);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& robo);
    RobotomyRequestForm(const std::string &target);
    ~RobotomyRequestForm();

    void execute(Bureaucrat const & executor) const ;

};

#endif 