all: Deps MySortingProgram

Deps:
	mkdir -p obj

clean:
	/bin/rm -f obj/*.o MySortingProgram

MySortingProgram: obj/main.o obj/sorting.o
	g++ -o $@ $^

obj/main.o: main.cpp
	g++ -Wall -o $@ -c $<

obj/sorting.o: src/sorting.cpp include/sorting.h
	g++ -Wall -o $@ -c $<
