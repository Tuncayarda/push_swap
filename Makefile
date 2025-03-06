NAME = push_swap
CC = cc
MAKEFLAGS += --no-print-directory
CFLAGS = -Wall -Wextra -Werror
LIBFT = libs/libft/libft.a
PRINTF = libs/ft_printf/libftprintf.a

SRCS =	src/algorithms.c src/error_handler.c \
		src/error_handler1.c src/operations1.c \
		src/operations2.c src/operations.c \
		src/parse.c src/push_swap.c \
		src/radix.c src/stack_utils1.c src/stack_utils.c

all: $(NAME)

$(NAME): $(LIBFT) $(PRINTF) $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) \
	$(LIBFT) \
	$(PRINTF) \
	-I./inc \
	-I./libs/libft \
	-I./libs/ft_printf \
	-o $(NAME)
	@echo DONE!

$(LIBFT):
	@make -sC libs/libft
	@make bonus -sC libs/libft

$(PRINTF):
	@make -sC libs/ft_printf

run: all
	@./push_swap
clean:
	@make fclean -sC libs/libft
	@make fclean -sC libs/ft_printf
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

update_libs:
	@git submodule update --init --recursive --remote

git_push: update_libs
	@git add .
	@read -p "Enter commit message: " message; \
	git commit -m "$$message"
	@git push

.PHONY: all clean fclean re update_libs git_push