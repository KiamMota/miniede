C = gcc
FLAG = -Wall
SRC_d = ./src
INC_d = ./include
GET_LIST = $(wildcard $(SRC_d)/*c)
OBJ_d = ./_build
DOT_O = $(patsubst $(SRC_d)/%.c, $(OBJ_d)/%.o, $(GET_LIST))
EXE = miniede

MINIEDE:	$(DOT_O)
	$(C) $(FLAG) $(