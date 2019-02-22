C = g++

EXE = test

OBJS = golay.o test.o

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
