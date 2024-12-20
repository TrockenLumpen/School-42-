NAME = get_next_line.a

SRCS =  get_next_line.c \

CC = gcc -D
RM = -rm -rf
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRCS:.c=.o)
AR = ar crs

$(NAME): $(OBJ)
    $(AR) $(NAME) $(OBJ)

%.o:%.c
    $(CC) $(CFLAGS) -c $< .o $@

all: $(NAME)

clean:
    $(RM) $(OBJ)

fclean: clean
    $(RM) $(OBJ) $(NAME)

re: fclean
    $(OBJ) $(NAME)

.Phony: clean fclean re