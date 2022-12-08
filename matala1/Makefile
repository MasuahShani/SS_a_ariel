CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LOOP=advancedClassificationLoop.o BasicClassification.o
OBJECTS_REC=advancedClassificationRecursion.o BasicClassification.o
FLAGS= -Wall -g

all:  loops recursives loopd recursived mains maindloop maindrec

loops: $(OBJECTS_LOOP)
	$(AR) -rcs libclassloop.a $(OBJECTS_LOOP)

recursives: $(OBJECTS_REC)
	$(AR) -rcs libclassrec.a $(OBJECTS_REC)

loopd: $(OBJECTS_LOOP)
	$(CC) -fPIC -shared -o libclassloop.so $(OBJECTS_LOOP) 

recursived: $(OBJECTS_REC)
	$(CC) -fPIC -shared -o libclassrec.so $(OBJECTS_REC) 

mains: $(OBJECTS_MAIN) libclassrec.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a

maindloop: $(OBJECTS_MAIN) libclassloop.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloop.so

maindrec: $(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so


main.o: NumClass.h main.c
	$(CC) $(FLAGS) -c main.c 

BasicClassification.o:NumClass.h BasicClassification.c 
	$(CC) $(FLAGS) -c BasicClassification.c

advancedClassificationLoop.o:NumClass.h advancedClassificationLoop.c 
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o:NumClass.h advancedClassificationRecursion.c 
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c




.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
