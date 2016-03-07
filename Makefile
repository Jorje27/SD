build:
	gcc -std=c9x testDouble.c -o testDouble
	gcc -std=c9x problem.c -o problem
clean:
	rm testDouble problem *~
runTest:	
	./testDouble
runValgrind:
	valgrind ./testDouble
runProblem:
	./problem
