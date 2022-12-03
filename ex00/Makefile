# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 17:05:26 by jmanet            #+#    #+#              #
#    Updated: 2022/12/03 11:51:19 by jmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

CC = g++

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${FLAGS} ${SRCS} -o ${NAME}


clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}
