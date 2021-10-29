NAME = libftprintf.a

LIBFT_PATH = ./libraries/libft
LIBFT = $(LIBFT_PATH)/libft.a

SRCS = ft_printf.c ft_printf_utils.c ft_char_conv.c ft_hex_conv.c \
ft_int_conv.c ft_ptr_conv.c ft_str_conv.c ft_uint_conv.c

INCLUDE = ./includes

OBJ_DIR = objs

OBJS = ${SRCS:%.c=$(OBJ_DIR)/%.o}

CC = clang
CC_FLAGS = -Wall -Werror -Wextra

$(OBJ_DIR)/%.o: ./srcs/%.c
	${CC} ${CFLAGS} -I $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJS) $(HEADER)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(MAKE) -C $(LIBFT_PATH) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -rf $(NAME)

re: clean all

.PHONY : all clean fclean re libft
