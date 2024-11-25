# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkohn <lkohn@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 13:45:50 by lkohn             #+#    #+#              #
#    Updated: 2024/11/10 17:05:55 by lkohn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_atoi.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c 	\
		ft_itoa.c	\
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \



AR = ar crs
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
RM_WIN = del /S /Q

OBJECTS = $(SRCS:.c=.o)
BONUS_OBJS = $(Bonus:.c=.o)
CUSTOM_OBJS = $(CUSTOM:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS)
