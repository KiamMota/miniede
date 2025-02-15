CC = clang++
FLAG = -Wall
SRC = ./src
INCLUDE = ./include
BUILD = ./_build

# wildcards

_CLIST = $(wildcard $(SRC)/*.c)
_CCLIST = $(wildcard $(SRC)/*.cpp)

# lists

_OLIST = $(patsubst $(SRC)/%.c, $(BUILD)/%.o, $(_CLIST))
_OPPLIST = $(patsubst $(SRC)/%.cpp, $(BUILD)/%.o, $(_CCLIST))

# rule to build the .c objects

$(BUILD)/%.o: $(SRC)/%.c
	$(CC) $(FLAG) -I$(INCLUDE) -c $< -o $@

# rule to build the .cpp objects

$(BUILD)/%.o:	$(SRC)/%.cpp
	$(CC) $(FLAG) -I$(INCLUDE) -c $< -o $@
	
# rule to run

miniede:	$(_OLIST) $(_OPPLIST)
	@echo ".O: $^"
	@reg add HKCU\Console /v VirtualTerminalLevel /t REG_DWORD /d 1 || true
	$(CC) $(FLAG) -I$(INCLUDE) -o $@ $^