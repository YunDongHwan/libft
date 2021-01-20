SRC = ft_atoi.c\
ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_memccpy.c\
ft_memcpy.c\
ft_memset.c\
ft_memmove.c\
ft_memchr.c\
ft_memcmp.c\
ft_tolower.c\
ft_toupper.c\
ft_strlen.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_strchr.c\
ft_strrchr.c\
ft_strnstr.c\
ft_strncmp.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\

CC = gcc
CFLAGES = -Wall -Wextra -Werror
AR = ar rcs
NAME = libft.a
OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $(OBJS)

%.o:%.c
	$(CC) $(CFLAGES) -c $< -o $@

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
