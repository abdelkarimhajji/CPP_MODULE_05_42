#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubbery) : AForm(shrubbery), target(shrubbery.target) {

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubbery) {
    if (this != &shrubbery) {
        this->target = shrubbery.target;
    }
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm(target, 145, 137) ,  target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!getSignedStatus())
        throw AForm::NotSignedException();
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