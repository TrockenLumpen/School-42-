NAME = libftprintf.a

SRCS =	ft_printf.c \
		ft_print_num.c \
		ft_print_char.c \
		ft_print_string.c \
		ft_print_ptr.c \
		ft_print_hex.c \
		ft_print_num_base.c \
		ft_print_unsigned_num.c

CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRCS:.c=.o)
AR = ar crs

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) 

clean:
	$(RM) $(OBJ) 
		
fclean: clean 
	$(RM) $(NAME) $(OBJ)
	
re: fclean all

.Phony: all clean fclean re
