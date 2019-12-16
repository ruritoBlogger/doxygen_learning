test: test.o test2.o
	g++ -Wall -o test test.o test2.o
test.o:
	g++ -Wall -c test.cpp test.h
test2.o:
	g++ -Wall -c test2.cpp test2.h
clean:
	rm -f  *.o *.gch test
