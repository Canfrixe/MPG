c=gcc
op=-Wall -Wextra

all : mpg.o
	$(c) $(op) mpg.o -o mpg

mpg.o : mpg.h mpg.c
	$(c) $(op) -c mpg.c

init :
	rm -r J1
clean :
	rm *.o mpg