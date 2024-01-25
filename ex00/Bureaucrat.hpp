/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:17:08 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/25 15:32:06 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
    protected:
        const std::string name;
        int grade;
    public:
        Bureaucrat(std::string &name, int grade);
        ~Bureaucrat();
        const std::string getName() const;
        const int getGarde() const;
        void incrementGrade();
        void decrementGrade();
};