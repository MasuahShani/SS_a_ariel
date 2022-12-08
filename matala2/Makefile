CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=my_mat.o
FLAGS= -Wall -g


all:  my_mat connections

connections: $(OBJECTS_MAIN) my_mat.a 
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) my_mat.a

my_mat: $(OBJECTS_LIB)
	$(AR) -rcs my_mat.a $(OBJECTS_LIB)

my_mat.o: my_mat.h my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

main.o: my_mat.h main.c
	$(CC) $(FLAGS) -c main.c









.PHONY: clean all

clean:
	rm -f *.o *.a connections 