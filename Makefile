C = clang
CPP = gcc
FLAG = -Wall
SRC = ./src
INC = ./include 
OBJ = ./_build

# EXE VARABLE

EXE = miniede

# .c WILDCARDS

GET_CLIST = $(wildcard $(SRC)/*.c)
GET_OLIST = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(GET_CLIST))

# .cpp WILDCARDS

GET_CPPLIST = $(wildcard $(SRC)/*.cpp)
GET_OPPLIST = $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(GET_CPPLIST))

# COMPILING .o FILES OF .c

$(OBJ)/%.o:	$(SRC)/%.c
	@$(C) $(FLAG) -I$(INC) -c $< -o $@ 

# COMPILING .o FILES OF .cpp

$(OBJ)/%.o:	$(SRC)/%.cpp
	@$(CPP) $(FLAG) -I$(INC) -c $< -o $@
# MAIN MAIKE

$(EXE):	$(GET_OLIST) $(GET_OPPLIST)
	@$(CPP) $(FLAG) -o $@ $^
	@reg add HKCU\Console /v VirtualTerminalLevel /t REG_DWORD /d 1 || true
	@./$(EXE)
clean:
	rm -rf $(OBJ)/*.o
	rm -rf $(EXE)
