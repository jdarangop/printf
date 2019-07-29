CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic

test: runtest

runtest: tests.c ../holberton.h ../*.c
	gcc -g -ggdb -o runtest tests.c ../holberton.h ../*.c `pkg-config --cflags --libs check`

clean:
	rm runtest
