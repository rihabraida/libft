CFLAGS = -Wall -Wextra -Werror
CC = cc
CFILES = ft_strrchr.c ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strlcat.c ft_strlcpy.c ft_substr.c ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlen.c ft_tolower.c ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strmapi.c ft_toupper.c ft_isalpha.c ft_memcpy.c ft_split.c ft_strchr.c ft_strncmp.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strnstr.c ft_isdigit.c ft_memset.c ft_striteri.c
NAME = libft.a 
OFILES = $(CFILES:.c=.o)
BNC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c  ft_lstiter.c ft_lstmap.c
BNO = $(BNC:.c=.o)

# $(NAME) : $(OFILES)
#       $(CC) $(CFLAGES) -o $(NAME) $(OFILES)
all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $(NAME) $(OFILES) 

bonus : $(BNO)

$(BNO) : $(BNC)
	$(CC) $(CFLAGES) -c $(BNC)
	ar rcs $(NAME) $(BNO) 

clean:
	rm -f $(OFILES) $(BNO)

fclean: clean
	rm -f $(NAME)

re: fclean all
