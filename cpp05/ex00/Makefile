# ============================================================================= #
                                                      
NAME		= Bureaucrat

# ============================================================================= #

SRCS		= main.cpp

CLASS		= Bureaucrat.cpp

# ============================================================================= #

BASE_SRC	= $(addprefix srcs/, $(SRCS))
CLASS_SRC	= $(addprefix srcs/class/, $(CLASS))

# ============================================================================= #

BASE_OBJS	= $(BASE_SRC:.cpp=.o)
CLASS_OBJS	= $(CLASS_SRC:.cpp=.o)

ALL_OBJS	= $(BASE_OBJS) $(CLASS_OBJS)

# ============================================================================= #

LDFLAGS		= 

# ============================================================================= #

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98 -g

RM			= rm -f

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.cpp=.o}

$(NAME):	$(ALL_OBJS)
	$(CC) $(CFLAGS) $(ALL_OBJS) $(LDFLAGS) -o $(NAME)

# ============================================================================= #

all:	$(NAME)

clean:
	$(RM) $(ALL_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

# ============================================================================= #
