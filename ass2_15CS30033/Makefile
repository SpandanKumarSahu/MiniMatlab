CC = gcc

test.o: test.c myl.h
	$(CC) -c test.c

ass2.o: ass2_15CS30033.c myl.h
	$(CC) -c ass2_15CS30033.c -o ass2.o

test: test.o ass2.o
	$(CC) test.o ass2.o -o test

%: %.c ass2.o
	$(CC) -o $@ ass2.o $<
clean:
	rm -rf *.o test
