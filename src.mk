#CONVERSION_FUNCTIONS#

SRC_FILES	=	ft_atof.c		\
				ft_atoi.c		\
				ft_itoa_base.c	\
				ft_itoa.c

#CTYPE_FUNCTIONS#

SRC_FILES	+=	ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isblank.c	\
				ft_isdigit.c	\
				ft_isprint.c	\
				ft_isspace.c	\
				ft_toupper.c	\
				ft_tolower.c

#I/O_FUNCTIONS#

SRC_FILES	+=	ft_putchar_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_putstr_fd.c		\
				get_next_line.c

#LIST_FUNCTIONS#

SRC_FILES	+=	ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstclear.c		\
				ft_lstdelone.c		\
				ft_lstiter.c		\
				ft_lstlast.c		\
				ft_lstmap.c			\
				ft_lstnew.c			\
				ft_lstsize.c

#MEMORY_FUNCTIONS#

SRC_FILES	+=	free_and_null.c	\
				ft_bzero.c		\
				ft_calloc.c		\
				ft_memccpy.c	\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_memcpy.c		\
				ft_memmove.c	\
				ft_memset.c

#STRING_FUNCTIONS#

SRC_FILES	+=	ft_split.c		\
				ft_strchr.c		\
				ft_strcmp.c		\
				ft_strdup.c		\
				ft_strjoin.c	\
				ft_strlcat.c	\
				ft_strlcpy.c	\
				ft_strlen.c		\
				ft_strmapi.c	\
				ft_strncmp.c	\
				ft_strnstr.c	\
				ft_strrchr.c	\
				ft_strtrim.c	\
				ft_substr.c

#NUMERIC_FUNCTIONS#

SRC_FILES	+=	min_max.c			\
				math/fp_utils_1.c	\
				math/fp_utils_2.c	\
				math/ft_percent.c

#PRINTF_FUNCTIONS#

PRINTF_FILES	=	ft_dprintf.c		\
					ft_printf.c			\
					flags_specifiers.c	\
					hex_handler.c		\
					int_handler.c		\
					percent_handler.c	\
					ptr_handler.c		\
					str_handler.c		\
					u_handler.c			\
					utilities.c

#GEOMETRY_FUNCTIONS#

SRC_FILES	+=	math/color_utils.c	\
				math/m2_ops_1.c		\
				math/m2_ops_2.c		\
				math/m2.c			\
				math/m3_ops_1.c		\
				math/m3_ops_2.c		\
				math/m3.c			\
				math/m4_ops_1.c		\
				math/m4_ops_2.c		\
				math/m4_ops_3.c		\
				math/m4.c			\
				math/rays.c			\
				math/v2_ops_1.c		\
				math/v2_ops_2.c		\
				math/v2.c			\
				math/v3_ops_1.c		\
				math/v3_ops_2.c		\
				math/v3.c			\
				math/v4_ops_1.c		\
				math/v4_ops_2.c		\
				math/v4.c