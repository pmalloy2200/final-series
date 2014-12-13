
CC = clang
CFLAGS = -Wall -O0 -g
LFLAGS = -O0 -g
LIBS = -lm
OBJECTS = main.o
EXECS =  main
FUNS = 

$(EXECS): $(OBJECTS)
	${CC} $(LFLAGS) $(LIBS) -o $@ $^

clean:
	rm -f $(OBJECTS)
	rm -f $(EXECS)

