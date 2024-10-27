#Targets 

# every var is treated as strings
SOURCE_OBJ = main.o utils.o
EXECUTABLE_NAME = main.exe

build: $(SOURCE_OBJ)
	gcc main.o utils.o -o $(EXECUTABLE_NAME)

main.o: main.c
	gcc -c main.c -o main.o

utils.o: utils.c
	gcc -c utils.c -o utils.o

execute:
	./$(EXECUTABLE_NAME)

clean:
	rm -f $(EXECUTABLE_NAME)
	rm -f *.o
