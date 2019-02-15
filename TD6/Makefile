C = g++

EXE = test

OBJS = test.o

FLAGS = 

all: clean launch

launch: main
	./$(EXE) coder hamlet.txt > hamlet.code && ./$(EXE) canal hamlet.code 0.01 > hamlet.canal && ./$(EXE) decoder hamlet.canal > hamlet.decode && ./$(EXE) distance hamlet.decode hamlet.txt

main: $(OBJS)
	$(C) -o $(EXE) $(OBJS)

%.o: %.cpp
	$(C) -c $< $(<:.cpp=.hpp) $(FLAGS)

clean:
	rm -f *.o $(EXE)
