#include "ShrubberyCreationAForm.hpp"
#include <fstream>

ShrubberyCreationAForm::ShrubberyCreationAForm(const std::string &target)
    : AForm(target, 145, 137) ,  target(target){}

ShrubberyCreationAForm::~ShrubberyCreationAForm() {}

void    ShrubberyCreationAForm::execute(Bureaucrat const & executor) const
{
    if (!getSignedStatus())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > getGradeRequiredToExecute())
        throw AForm::GradeTooLowException();

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