# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: tprzybyl <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/03 11:36:22 by tprzybyl     #+#   ##    ##    #+#        #
#    Updated: 2019/02/11 18:48:14 by tprzybyl    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a
SRC=ft_atoi.c \
	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isblank.c ft_isdigit.c \
	ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
	ft_lstmap.c ft_lstnew.c ft_memalloc.c \
	ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memset.c ft_putchar.c \
	ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
	ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
	ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
	ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
	ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
	ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c \
	ft_lstlen.c ft_islower.c ft_isupper.c ft_strfjoin.c ft_strclen.c ft_strfsub.c \
	ft_strnclen.c ft_strcchr.c ft_arrstrdel.c ft_abs.c get_next_line.c sget_next_line.c \
	ft_strgetfrom.c ft_dabs.c ft_ftoa.c ft_percent.c ft_seekpercent.c ft_atoinext.c \
	ft_getnextnum.c ft_isbetween.c \

FLAGS= -Wall -Wextra -Werror

OBJ = $(subst .c,.o,$(SRC))

BLUE = \033[0;38;5;123m


all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "\n"
	@ranlib $(NAME)

%.o: %.c libft.h
	@gcc $(FLAGS) -o $@ -c $<
	@echo "$(BLUE).\c"

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
