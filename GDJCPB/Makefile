EXE=$(addsuffix .exe, $(basename $(wildcard *.cpp)))

CPPC=g++ -std=c++14
CPPC_FLAGS=-Wall -Wextra -pedantic -O3

all : $(EXE)

%.exe : %.cpp
	$(CPPC) $(CPPC_FLAGS) $< -o$@

clean:
	rm -f $(EXE)

.PHONY: all clean
	
