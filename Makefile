# VARABLE DEFINITIONS

C = clang
FLAG = -Wall
SRC = ./src
INC = ./include
OBJ = ./_build
GET_CLIST = $(wildcard $(SRC)/*.c)
GET_OLIST = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(GET_CLIST))

EXE = miniede

# COMPILING .o FILES

$(OBJ)/%.o:	$(SRC)/%.c
	$(C) $(FLAG) -I$(INC) -c $< -o $@ 

# MAKE

$(EXE):	$(GET_OLIST)
	$(C) $(FLAG) -o $@ $^
# CLEAN .O

clean:
	rm -rf $(OBJ)/*.o $(EXE)
