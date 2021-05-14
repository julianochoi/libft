NAME		=	libft.a

# **************************************************************************** #
# *-------------------------PATHS AND DIRECTORIES----------------------------* #
# **************************************************************************** #

include src.mk
SRC_DIR		=	src
SRC_SUBDIR	=	conversion \
				ctype \
				io \
				list \
				math \
				math/algebra \
				memory \
				printf \
				string
SRC			=	$(addprefix $(SRC_DIR)/,$(SRC_FILES))

OBJ_DIR		=	obj
OBJ_SUBDIR	=	$(addprefix $(OBJ_DIR)/,$(SRC_SUBDIR))
OBJ			=	$(addprefix $(OBJ_DIR)/,$(SRC_FILES:%.c=%.o))

INC_DIR		=	include

# **************************************************************************** #
# *---------------------------COMPILERS AND FLAGS----------------------------* #
# **************************************************************************** #

LIBC		=	ar -rcs
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
CPPFLAGS	=	$(foreach path,$(INC_DIR),-I $(path))
#LDFLAGS		=	$(foreach path, $(LIB_DIR), -I $(path)/include)
#LDFLAGS		=	$(foreach path, $(LIB_DIR), -L $(path))
#LIBFLAGS	=	$(foreach lib, $(LIBS), -l $(lib))
RM			=	rm -f

# **************************************************************************** #
# *-----------------------------------RULES----------------------------------* #
# **************************************************************************** #

obj/%.o:	src/%.c
		@mkdir -p $(OBJ_DIR) $(OBJ_SUBDIR)
		@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
		@$(LIBC) $(NAME) $(OBJ)
		@echo "$(basename $(NAME)) built successfully."

all:	$(NAME)

clean:
		@$(RM) $(OBJ)
		@$(RM) -r $(OBJ_DIR)
		@echo "Object files for $(NAME) removed."

fclean:	clean
		@$(RM) $(NAME)
		@echo "$(NAME) removed."

re:	fclean all

.PHONY: all clean fclean re
