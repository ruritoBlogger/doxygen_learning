test: test.o
	g++ -Wall -o test test.o
test.o:
	g++ -Wall -c test.cpp test.h
clean:
	rm -f  *.o *.gch test
