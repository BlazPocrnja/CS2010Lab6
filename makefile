CC = g++
OBJ = main.o
OBJ2 = stack.o
OBJ3 = queue.o

main: $(OBJ) $(OBJ2) $(OBJ3)
	$(CC) $(OBJ) $(OBJ2) $(OBJ3) -o $@


.cpp.o : 
	$(CC) -c $<


clean:
	rm *.o main

archive:
	

