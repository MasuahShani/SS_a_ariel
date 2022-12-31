CC=gcc
AR=ar 
FLAGS= -Wall -g
OB_MAIN=txtfind.o
OB_LIB=lib_mat3.o

all:lib_mat3 txtfind isort

txtfind:$(OB_MAIN) lib_mat3.a
	$(CC) $(FLAGS) -o txtfind $(OB_MAIN) lib_mat3.a

lib_mat3: $(OB_LIB)
	$(AR) -rcs lib_mat3.a $(OB_LIB)

txtfind.o:lib_mat3.h txtfind.c
	$(CC) $(FLAGS) -c txtfind.c

lib_mat3.o:lib_mat3.h lib_mat3.c
	$(CC) $(FLAGS) -c lib_mat3.c

isort: q1.c
	$(CC) $(FLAGS) -o isort q1.c



.PHONY: clean all

clean:
	rm -f *.o *.a isort txtfind 
