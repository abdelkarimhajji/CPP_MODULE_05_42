#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm(target, 145, 137) ,  target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!getSignedStatus())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > getGradeRequiredToExecute())
        throw AForm::GradeTooLowException();

    std::ofstream ofs(this->target + "_shrubbery");
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