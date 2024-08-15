NAME = Bureaucrat

SRC = Bureaucrat.cpp main.cpp  PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp AForm.cpp

OBJ = ${SRC:.cpp=.o}

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OBJ)
fclean: clean
	@rm -rf $(NAME)
re: fclean all