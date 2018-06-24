RM := /bin/rm
CXX := /usr/bin/g++
MKDIR := /bin/mkdir

all: Deps MySortingProgram

Deps:
	@${MKDIR} -p obj

clean:
	@${RM} -f obj/*.o MySortingProgram

MySortingProgram: obj/main.o obj/sorting.o
	@${CXX} -o $@ $^

obj/main.o: main.cpp
	@${CXX} -g -Wall -o $@ -c $<

obj/sorting.o: src/sorting.cpp include/sorting.h
	@${CXX} -g -Wall -o $@ -c $<
