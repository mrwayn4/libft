SRCS = ft_isalpha.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	   ft_strlen.c ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_toupper.c ft_tolower.c \
	   ft_strncmp.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_atoi.c ft_isalnum.c ft_strlcat.c \
	   ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
	   ft_putendl_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_strtrim.c ft_split.c

SRCSB = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \


OBJCT = ${SRCS:.c=.o}
OBJCTB = ${SRCSB:.c=.o}
CC = cc
RM = rm -rf
NAME = libft.a
GFLAGS = -Wall -Wextra -Werror

all : ${NAME}

${NAME} :  ${OBJCT}
		ar -rcs ${NAME} ${OBJCT}

%.o: %.c libft.h
		${CC} ${GFLAGS} -c $< -o $@

bonus: ${NAME} ${OBJCTB}
		ar -rcs ${NAME} ${OBJCTB}

clean :
		${RM} ${OBJCT} ${OBJCTB}
fclean : clean
		${RM} ${NAME}

re : fclean all

.PHONY : bonus all fclean clean re