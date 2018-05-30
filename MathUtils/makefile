test: test.o functions.o
	gcc test.o functions.o -o test

test.o: test.c
	gcc -Wall -g -c test.c -o test.o
	
functions.o: functions.c
	gcc -Wall -g -c functions.c -o functions.o

run: test
		./test
		
clean:
		rm *.o test
