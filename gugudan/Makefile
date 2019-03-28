CC=gcc
CFLAGS=-I ./
HEADER= gugudan.h

gugudan: main.o one2three.o four2six.o seven2nine.o
	$(CC) -o gugudan main.o one2three.o four2six.o seven2nine.o

one2three.o: gugudan.h one2three.c
	$(CC) $(CFLAGS) -c one2three.c

four2six.o:  gugudan.h four2six.c
	$(CC) $(CFLAGS) -c four2six.c

seven2nine.o: gugudan.h seven2nine.c
	$(CC) $(CFLAGS) -c seven2nine.c

main.o: gugudan.h main.c
	$(CC) $(CFLAGS) -c main.c


clean:
	rm -rf gugudan *.o
