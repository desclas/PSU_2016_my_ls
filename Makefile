##
## Makefile for  in /home/mathias/Bureau/my_ls/ls_normal
## 
## Made by Mathias
## Login   <mathias.descoin@epitech.eu@epitech.net>
## 
## Started on  Sun Dec  4 13:34:39 2016 Mathias
## Last update Sun Dec  4 13:38:33 2016 Mathias
##

SRC	=	ls.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_ls

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclan all
