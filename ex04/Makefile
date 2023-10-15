# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 14:12:57 by zsyyida           #+#    #+#              #
#    Updated: 2023/10/15 12:55:02 by zsyyida          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed


CXX = c++
RM	= rm -rf

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re .cpp.o