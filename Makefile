# VARABLE DEFINITIONS

C = clang
CPP = clang++
FLAG = -Wall
SRC = ./src
INC = ./include
OBJ = ./_build
GET_CLIST = $(wildcard $(SRC)/*.c)
GET_CPPLIST = $(wildcard $(SRC)/*.cpp)
GET_OLIST = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(GET_CLIST))
GET_OPPLIST = $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(GET_CPPLIST))
EXE = miniede

# COMPILING .o FILES OF .c

$(OBJ)/%.o:	$(SRC)/%.c
	$(C) $(FLAG) -I$(INC) -c $< -o $@ 

# COMPILING .o FILES OF .cpp

$(OBJ)/%.o:	$(SRC)/%.cpp
	$(CPP) $(FLAG) -I$(INC) -c $< -o $@

# MAKE

$(EXE):	$(GET_OLIST) $(GET_OPPLIST)
	$(C) $(FLAG) -o $@ $^
# CLEAN .O

clean:
	rm -rf $(OBJ)/*.o $(EXE)
