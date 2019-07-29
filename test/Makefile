
CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -Wno-format

test: runtest

runtest: tests.c ../holberton.h ../*.c
	gcc -o runtest tests.c ../holberton.h ../*.c `pkg-config --cflags --libs check`