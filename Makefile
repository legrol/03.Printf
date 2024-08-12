# Sources
# -------

SRCS = 	ft_printf.c \
			ft_putchar.c \
			ft_puthex.c \
			ft_putnbr_uns.c \
			ft_putnbr.c \
			ft_putptr.c \
			ft_putstr.c \

# SRCSB =	

NAME = libftprintf.a
OBJS = ${SRCS:.c=.o}
#OBJSB = ${SRCSB:.c=.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

# Colors
# ------

DEL_LINE =		\033[2K
ITALIC =		\033[3m
BOLD =			\033[1m
DEF_COLOR = 	\033[0;39m
GRAY = 			\033[0;90m
RED = 			\033[0;91m
GREEN = 		\033[0;92m
YELLOW = 		\033[0;93m
BLUE = 			\033[0;94m
MAGENTA = 		\033[0;95m
CYAN = 			\033[0;96m
WHITE = 		\033[0;97m
BLACK =			\033[0;99m
ORANGE =		\033[38;5;209m
BROWN =			\033[38;2;184;143;29m
DARK_GRAY =		\033[38;5;234m
MID_GRAY =		\033[38;5;245m
DARK_GREEN =	\033[38;2;75;179;82m
DARK_YELLOW =	\033[38;5;143m

# -------

all:	${NAME} 

${NAME} : ${OBJS} ft_printf.h
	@echo "$(YELLOW)Compiling ...$(DEF_COLOR)"
	@ar rcs ${NAME} ${OBJS}
	@echo "$(GREEN) $(NAME) created ✓$(DEF_COLOR)"
	@ranlib $(NAME)
	@echo "$(GREEN) $(NAME) indexed ✓$(DEF_COLOR)"

%.o: %.c ft_printf.h
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@echo "$(YELLOW)Remove .o  ...$(DEF_COLOR)"
	@${RM} ${OBJS}
	@echo "$(RED)OBJS deleted $(DEF_COLOR)"	
#	@${RM} ${OBJS} ${OBJSB}
#	@echo "OBJS and OBJSB deleted"

fclean:	clean 
	@echo "$(YELLOW)Remove lib ...$(DEF_COLOR)"
	@${RM} ${NAME}
	@echo "$(RED)$(NAME) deleted$(DEF_COLOR)"

re:	fclean all

#bonus: ${OBJS} ${OBJSB}
#	@ar rcs ${NAME} ${OBJS} ${OBJSB}

.PHONY : all clean fclean re
#.PHONY : all clean fclean re bonus