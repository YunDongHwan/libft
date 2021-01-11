NAME = libft.a
  
CC = gcc
AFLAGS = rc
CFLAGS = -Wall -Werror -Wextra -I. -c

#.SUFFIXES : .c .o
  
SRCS = *.c
OBJS = $(SRCS:.c=.o)
  
all : $(NAME)
 
$(NAME) : $(OBJS)
    ar rc $(NAME) $(OBJS)
    ranlib $(NAME)
  
clean :
    rm -f $(OBJS)
  
fclean : clean
    rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJS)
	ar $(AFLAGS) $@ $?
%.o : %.c
	$(CC) $(CFLAGS) -c $?
.PHONY : all clean fclean re

# ASFLAGS = <- as 명령어의 옵션 세팅
# AS = as
# CFLAGS = <- gcc 의 옵션 세팅
# CC = cc (= gcc)
# CPPFLAGS = <- g++ 의 옵션
# CXX = g++
# LDLFAGS = <- ld 의 옵션 세팅
# LD = ld
# LFLAGS = <- lex 의 옵션 세팅
# LEX = lex
# YFLAGS = <- yacc 의 옵션 세팅
# YACC = yacc
# MAKE_COMMAND = make

# 파일들을 처리하기 위한 명령어
# AR = ar (Archive maintaining program)
# AS = as (Assembler)
# CC = cc (= gcc , C compiler)
# CXX = g++ (C++ compiler)
# CO = co (extracting file from RCS)
# CPP = $(CC) -E (C preprocessor)
# FC = f77 (Fortran compiler)
# LEX = lex (LEX processor)
# PC = pc (Pascal compiler)
# YACC = yacc (YACC processor)
# TEX = tex (TEX processor)
# TEXI2DVI = texi2dvi (Texiinfo file processor)
# WEAVE = weave (Web file processor)
# RM = rm -f (remove file)

# 위의 명령어에서 사용될 FLAG(옵션)에 정의한 매크로  '*'표시한 것은 자주 쓰이게 될 플래그
# ARFLAGS = (ar achiver의 플래그) *
# ASFLAGS = (as 어셈블러의 플래그)
# CFLAGS = (C 컴파일러의 플래그) *
# CXXFLAGS = (C++ 컴파일러의 플래그) *
# COFLAGS = (co 유틸리티의 플래그)
# CPPFLAGS = (C 전처리기의 플래그)
# FFLAGS = (Fortran 컴파일러의 플래그)
# LDFLAGS = (ld 링커의 플래그) *
# LFLAGS = (lex 의 플래그) *
# PFLAGS = (Pascal 컴파일러의 플래그)
# YFLAGS = (yacc 의 플래그) *