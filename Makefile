
target_bin=main
ODIR=obj
IDIR=	SFML/include
_OBJ = main.opp


export MakeTemplate:= $(abspath Makefile.in)
STRICT_FLAGS= -Wall -Wextra -Werror -Wreturn-type -Werror=return-type


SFML_OBJ_PATH=SFML/lib
#EXT_OBJS=$(wildcard $(SFML_OBJ_PATH)/*.a)
#$(wildcard SFML/bin/*.dll) 

 
export FLAGS+= -w -O3 $(STRICT_FLAGS)  -LSFML/lib -lsfml-graphics -lsfml-window -lsfml-system

include $(MakeTemplate)
