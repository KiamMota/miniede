C = clang
CPP = clang++
GLOBAL_COMP = gcc
FLAG = -Wall
SRC = ./src
INC = ./include ./include/pdcurses
OBJ = ./_build


# .c WILDCARDS

GET_CLIST = $(wildcard $(SRC)/*.c)
GET_OLIST = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(GET_CLIST))

# .cpp WILDCARDS

GET_CPPLIST = $(wildcard $(SRC)/*.cpp)
GET_OPPLIST = $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(GET_CPPLIST))

# EXE VARABLE

EXE = miniede

# COMPILING .o FILES OF .c

$(OBJ)/%.o:	$(SRC)/%.c
	$(C) $(FLAG) -I$(INC) -c $< -o $@ 

# COMPILING .o FILES OF .cpp

$(OBJ)/%.o:	$(SRC)/%.cpp
	$(CPP) $(FLAG) -I$(INC) -c $< -o $@

# MAIN MAIKE

$(EXE):	$(GET_OLIST) $(GET_OPPLIST)
	$(GLOBAL_COMP) $(FLAG) -o $@ $(GET_OLIST)
