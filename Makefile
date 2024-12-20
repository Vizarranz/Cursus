# Que compilador usaremos
CC = cc

#Definimos las flags
CFLAGS = -Wall -Werror -Wextra

#Nombre de archivo de salida
NAME = libft.a

#Los archivos fuente de la prate obligatoria
SRC =ft_isalpha.c ft_memset.c ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_strlen.c

#Generamos los objetos a partir de los archivos fuentes
OBJ = $(SRC:.c=.o)

#Regla que se ejecuta al llamar a make
all: $(NAME)

#Regla para limpiar todos los archivos
clean:
	@rm -f $(OBJ) $(BONUS_OBJ)

#Regla para limpiar todos los archivos en general + archivo de salida
fclean: clean
	@rm -f $(NAME)

#Regla para recompilar todo
re:	fclean all

# Regla para crear el archivo de salida a partir de los objetos creados
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\033[32m\n$(NAME) Compiled ᕦ(\033[31m♥\033[32m_\033[31m♥\033[32m)ᕤ\n"

$(OBJ): %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus
