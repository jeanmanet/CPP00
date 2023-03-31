# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmanet <jmanet@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 12:27:10 by jmanet            #+#    #+#              #
#    Updated: 2023/03/31 12:12:51 by jmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRCS = ${wildcard *.cpp}

OBJS = ${SRCS:.cpp=.o}

HEADERS = ${wildcard *.hpp}

CC = g++

all : ${NAME}

${NAME} : ${OBJS} ${HEADERS}
	${CC} ${FLAGS} ${SRCS} -o ${NAME}


clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}
