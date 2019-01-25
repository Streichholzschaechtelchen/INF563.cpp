C = g++
JC = javac

EXE = coder

OBJS = coder.o Source.o

FLAGS = 

all: clean main Decoder.class

main: $(OBJS)
	$(C) -o $(EXE) $(OBJS)

%.o: %.cpp
	$(C) -c $< $(<:.cpp=.hpp) $(FLAGS)

%.class: %.java
	$(JC) $<

clean:
	rm -f *.o $(EXE) *.class
