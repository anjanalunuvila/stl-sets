CC=g++
FLAGS= -Wall -pedantic -g
##++ -Wall -Wextra -Werror -std=c++11
SOURCES= main.cpp
DEPS= header/infor.h
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=exec

all: $(EXECUTABLE)
	@echo Make has finished.

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE)
##	$(CC)  -o a.out main.o

%.o: %.cpp $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

##main.o:
##	$(CC) -c main.c

clean: 
	$(RM) *.o *~ $(EXECUTABLE)
