CC = clang++
FLAG = -Wall
SRC = ./src
INCLUDE = ./include
BUILD = ./_build

MEDE = miniede

# wildcards

_CLIST = $(wildcard $(SRC)/*.c)
_CCLIST = $(wildcard $(SRC)/*.cpp)

# lists

_OLIST = $(patsubst $(SRC)/%.c, $(BUILD)/%.o, $(_CLIST))
_OPPLIST = $(patsubst $(SRC)/%.cpp, $(BUILD)/%.o, $(_CCLIST))

# rule to build the .c objects

$(BUILD)/%.o: $(SRC)/%.c
	@$(CC) $(FLAG) -I$(INCLUDE) -c $< -o $@
	@echo ".c -> .o..."
# rule to build the .cpp objects

$(BUILD)/%.o:	$(SRC)/%.cpp
	@$(CC) $(FLAG) -I$(INCLUDE) -c $< -o $@
	@echo ".cpp -> .o..."
# rule to run

$(MEDE):	$(_OLIST) $(_OPPLIST)
	@echo ".O: $^"
	@$(CC) $(FLAG) -I$(INCLUDE) -o $@ $^
	@echo "COMPILED!"
	@reg add HKCU\Console /v VirtualTerminalLevel /t REG_DWORD /d 1 || true
	$(MEDE)

clean:
	# Verifica a plataforma e executa o comando adequado
	@if [ "$(OS)" = "Windows_NT" ]; then \
		del /Q $(BUILD)\\*.o $(MEDE); \
	else \
		rm -f $(BUILD)/*.o $(MEDE); \
	fi
