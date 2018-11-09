SRC = ./src
INCLUDE = ./include
OBJ = ./obj
BIN = ./bin
APPS = ./apps

all: app run

app:
	gcc $(APPS)/testFile.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/testeFile

run:
	valgrind $(BIN)/testeFile

clean:
	rm $(BIN)/testeFile
	rm $(OBJ)/*.o

%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc -c $< -I $(INCLUDE) -o $(OBJ)/$@

valgrind:
	valgrind --leak-check=full ./testeFile
