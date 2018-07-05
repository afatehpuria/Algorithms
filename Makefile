RM := /bin/rm
CXX := /usr/bin/g++
MKDIR := /bin/mkdir

all: Deps MySortingProgram Multiply

Deps:
	@${MKDIR} -p obj

clean:
	@${RM} -f obj/*.o MySortingProgram Multiply

Multiply: obj/MultiplyMain.o obj/multiplication.o obj/utils.o
	@${CXX} -o $@ $^

obj/MultiplyMain.o: MultiplyMain.cpp
	@${CXX} -g -Wall -o $@ -c $<

obj/multiplication.o: src/multiplication.cpp include/multiplication.h
	@${CXX} -g -Wall -o $@ -c $<

MySortingProgram: obj/main.o obj/sorting.o
	@${CXX} -o $@ $^

obj/main.o: main.cpp
	@${CXX} -g -Wall -o $@ -c $<

obj/sorting.o: src/sorting.cpp include/sorting.h
	@${CXX} -g -Wall -o $@ -c $<

obj/utils.o: src/utils.cpp include/utils.h
	@${CXX} -g -Wall -o $@ -c $<
