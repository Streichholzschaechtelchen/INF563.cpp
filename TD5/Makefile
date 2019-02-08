C = g++

EXE = test

OBJS = test.o Next.o Markov.o

FLAGS = 

all: clean launch

launch: main
	./$(EXE)

main: $(OBJS)
	$(C) -o $(EXE) $(OBJS)

%.o: %.cpp
	$(C) -c $< $(<:.cpp=.hpp) $(FLAGS)

clean:
	rm -f *.o $(EXE)
