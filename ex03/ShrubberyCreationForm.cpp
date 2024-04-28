/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:13:51 by ahajji            #+#    #+#             */
/*   Updated: 2024/04/28 16:14:43 by ahajji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubbery) : Form(shrubbery), target(shrubbery.target) {

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubbery) {
    if (this != &shrubbery) {
        target = shrubbery.target;
    }
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : Form(target, 145, 137) ,  target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!getSignedStatus())
        throw Form::GradeTooLowException();
    if (executor.getGrade() > getGradeRequiredToExecute())
        throw Form::GradeTooLowException();

    std::ofstream ofs(getName() + "_shrubbery");
    ofs << "                                                  .\n";
    ofs << "                                              .         ;  \n";
    ofs << "                 .              .              ;%     ;;   \n";
    ofs << "                   ,           ,                :;%  %;   \n";
    ofs << "                    :         ;                   :;%;'     .,   \n";
    ofs << "           ,.        %;     %;            ;        %;'    ,;\n";
    ofs << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n";
    ofs << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n";
    ofs << "               ;%;      %;        ;%;        % ;%;  ,%;'\n";
    ofs << "                `%;.     ;%;     %;'         `;%%;.%;'\n";
    ofs << "                 `:;%.    ;%%. %@;        %; ;@%;%'\n";
    ofs << "                    `:%;.  :;bd%;          %;@%;'\n";
    ofs << "                      `@%:.  :;%.         ;@@%;'   \n";
    ofs << "                        `@%.  `;@%.      ;@@%;         \n";
    ofs << "                          `@%%. `@%%    ;@@%;        \n";
    ofs << "                            ;@%. :@%%  %@@%;       \n";
    ofs << "                              %@bd%%%bd%%:;     \n";
    ofs << "                                #@%%%%%:;;\n";
    ofs << "                                %@@%%%::;\n";
    ofs << "                                %@@@%(o);  . '         \n";
    ofs << "                                %@@@o%;:(.,'         \n";
    ofs << "                            `.. %@@@o%::;         \n";
    ofs << "                               `)@@@o%::;         \n";
    ofs << "                                %@@(o)::;        \n";
    ofs << "                               .%@@@@%::;         \n";
    ofs << "                               ;%@@@@%::;.          \n";
    ofs << "                              ;%@@@@%%:;;;. \n";
    ofs << "                          ...;%@@@@@%%:;;;;,..    Gilo97\n";
    ofs.close();
}