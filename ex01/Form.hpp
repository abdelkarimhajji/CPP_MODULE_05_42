/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:52:03 by ahajji            #+#    #+#             */
/*   Updated: 2024/01/29 21:37:31 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool    signedStatus;
        const int  gardeRequiredToSign;
        const int  gardeRequiredToExecute;
    public:
        Form();
        ~Form();
        
        std::string getName() const;
        bool    getSignedStatus() const;
        int getGradeRequiredToSign() const;
        int getGradeRequiredToSign() const;

        void    beSigned(Bureaucrat& burcrat);
        
        
};