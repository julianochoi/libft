#CONVERSION_FUNCTIONS#

SRC_FILES	=	conversion/ft_atof.c		\
				conversion/ft_atoi.c		\
				conversion/ft_itoa_base.c	\
				conversion/ft_itoa.c

#CTYPE_FUNCTIONS#

SRC_FILES	+=	ctype/ft_isalnum.c	\
				ctype/ft_isalpha.c	\
				ctype/ft_isascii.c	\
				ctype/ft_isblank.c	\
				ctype/ft_isdigit.c	\
				ctype/ft_isprint.c	\
				ctype/ft_isspace.c	\
				ctype/ft_toupper.c	\
				ctype/ft_tolower.c

#I/O_FUNCTIONS#

SRC_FILES	+=	io/ft_putchar_fd.c		\
				io/ft_putendl_fd.c		\
				io/ft_putnbr_fd.c		\
				io/ft_putstr_fd.c		\
				io/get_next_line.c

#LIST_FUNCTIONS#

SRC_FILES	+=	list/ft_lstadd_back.c	\
				list/ft_lstadd_front.c	\
				list/ft_lstclear.c		\
				list/ft_lstdelone.c		\
				list/ft_lstiter.c		\
				list/ft_lstlast.c		\
				list/ft_lstmap.c		\
				list/ft_lstnew.c		\
				list/ft_lstsize.c

#MEMORY_FUNCTIONS#

SRC_FILES	+=	memory/free_and_null.c	\
				memory/ft_bzero.c		\
				memory/ft_calloc.c		\
				memory/ft_memccpy.c		\
				memory/ft_memchr.c		\
				memory/ft_memcmp.c		\
				memory/ft_memcpy.c		\
				memory/ft_memmove.c		\
				memory/ft_memset.c

#STRING_FUNCTIONS#

SRC_FILES	+=	string/ft_split.c	\
				string/ft_strchr.c	\
				string/ft_strcmp.c	\
				string/ft_strdup.c	\
				string/ft_strjoin.c	\
				string/ft_strlcat.c	\
				string/ft_strlcpy.c	\
				string/ft_strlen.c	\
				string/ft_strmapi.c	\
				string/ft_strncmp.c	\
				string/ft_strnstr.c	\
				string/ft_strrchr.c	\
				string/ft_strset.c	\
				string/ft_strtrim.c	\
				string/ft_substr.c

#NUMERIC_FUNCTIONS#

SRC_FILES	+=	math/color_utils.c	\
				math/min_max.c		\
				math/fp_utils.c		\
				math/ft_percent.c

#PRINTF_FUNCTIONS#

PRINTF_FILES	=	printf/ft_dprintf.c			\
					printf/ft_printf.c			\
					printf/flags_specifiers.c	\
					printf/hex_handler.c		\
					printf/int_handler.c		\
					printf/percent_handler.c	\
					printf/ptr_handler.c		\
					printf/str_handler.c		\
					printf/u_handler.c			\
					printf/utilities.c

#ALGEBRA_FUNCTIONS#

SRC_FILES	+=	math/algebra/m2_ops_1.c		\
				math/algebra/m2_ops_2.c		\
				math/algebra/m2.c			\
				math/algebra/m3_ops_1.c		\
				math/algebra/m3_ops_2.c		\
				math/algebra/m3.c			\
				math/algebra/m4_ops_1.c		\
				math/algebra/m4_ops_2.c		\
				math/algebra/m4_ops_3.c		\
				math/algebra/m4.c			\
				math/algebra/rays.c			\
				math/algebra/v2_ops_1.c		\
				math/algebra/v2_ops_2.c		\
				math/algebra/v2.c			\
				math/algebra/v3_ops_1.c		\
				math/algebra/v3_ops_2.c		\
				math/algebra/v3.c			\
				math/algebra/v4_ops_1.c		\
				math/algebra/v4_ops_2.c		\
				math/algebra/v4.c