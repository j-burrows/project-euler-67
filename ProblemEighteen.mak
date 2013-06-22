#makefile.mak
CC = gcc
WARNINGS = -Wall

all: Problem18.exe

Problem18.exe: PrintArrays.o FileReader.o ProblemEighteen.o
	$(CC) $(WARNINGS) PrintArrays.o FileReader.o ProblemEighteen.o -o Problem18.exe
	
PrintArrays.o: PrintArrays.c PrintArrays.h
	$(CC) -c PrintArrays.c
	
FileReader.o: FileReader.c FileReader.h
	$(CC) -c FileReader.c
	
ProblemEighteen.o: ProblemEighteen.c
	$(CC) -c ProblemEighteen.c
	
clean:
	rm -rf *o Problem18.exe