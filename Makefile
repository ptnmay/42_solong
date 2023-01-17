NAME = so_long

CC = gcc
CFLAGS = #-g -Wall -Werror -Wextra
HEADER = so_long.h
MLX_FLAGS = -LMLX -lMLX  -framework OpenGL -framework AppKit
RM = rm
LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a

MLX_PATH = MLX
MLX = $(MLX_PATH)/libmlx.a

SRC = filecheck.c check_five.c open_check.c srang_map.c check_wall.c ff_namtuam.c p_u_nee.c render.c zou.c
OBJ = $(SRC:.c=.o)
all : $(NAME)

$(NAME) : $(LIBFT) $(MLX) $(OBJ)
		$(CC) $(MLX_FLAGS) $(OBJ) $(LIBFT) $(MLX) -o $(NAME) 2> /dev/null

$(LIBFT) :
			make -C $(LIBFT_PATH)

$(MLX) :
			make -C $(MLX_PATH)

#MLX_DIR = ./MLX

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -IMLX -c $< -o $@

clean:
	@make -C $(LIBFT_PATH) clean
	@make -C $(MLX_PATH) clean
	@$(RM) $(OBJ)

fclean: clean
	@make -C $(LIBFT_PATH) fclean
	@$(RM) $(NAME)

re: fclean all

#gcc ./libft/*.c ./get_next_line/*.c filecheck.c check_five.c open_check.c srang_map.c check_wall.c ff_namtuam.c p_u_nee.c render.c && ./a.out mmm.ber

#$(NAME): $(OBJ)
#@$(CC) $(OBJ) -o $(NAME) $(MLX_FLAGS)
