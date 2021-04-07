# CONVERSION FUNCTIONS #

SRC_FILES	=	ft_atof.c		\
				ft_atoi.c		\
				ft_itoa_base.c	\
				ft_itoa.c

# CTYPE FUNCTIONS #

SRC_FILES	+=	ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isblank.c	\
				ft_isdigit.c	\
				ft_isprint.c	\
				ft_isspace.c	\
				ft_toupper.c	\
				ft_tolower.c

# I/O FUNCTIONS #

SRC_FILES	+=	ft_putchar_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_putstr_fd.c		\
				get_next_line.c

# LIST FUNCTIONS #

SRC_FILES	+=	ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstclear.c		\
				ft_lstdelone.c		\
				ft_lstiter.c		\
				ft_lstlast.c		\
				ft_lstmap.c			\
				ft_lstnew.c			\
				ft_lstsize.c

# MEMORY FUNCTIONS #

SRC_FILES	+=	free_and_null.c	\
				ft_bzero.c		\
				ft_calloc.c		\
				ft_memccpy.c	\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_memcpy.c		\
				ft_memmove.c	\
				ft_memset.c

# STRING FUNCTIONS #

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

# NUMERIC FUNCTIONS #

SRC_FILES	+=	min_max.c

# PRINTF FUNCTIONS #

PRINTF_FILES	=	ft_dprintf.c \
					ft_printf.c \
					flags_specifiers.c \
					hex_handler.c \
					int_handler.c \
					percent_handler.c \
					ptr_handler.c \
					str_handler.c \
					u_handler.c \
					utilities.c