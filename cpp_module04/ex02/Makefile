# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 00:25:35 by nlederge          #+#    #+#              #
#    Updated: 2024/03/15 16:33:25 by nlederge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= abstract_animals
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

FILES	= main.cpp \
			AAnimal.cpp \
			Cat.cpp \
			Dog.cpp \
			Brain.cpp \

OBJS	= $(FILES:.cpp=.o)

###

DEF_COLOR = \033[0;39m

GREEN = \033[0;92m

###

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@ 

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created successfully!$(DEF_COLOR)"

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean:
	@$(RM) $(OBJS)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re