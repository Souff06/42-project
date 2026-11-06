NAME = printf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCS =	ft_utils.c \
		ft_printf.c	\
		ft_utils2.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
