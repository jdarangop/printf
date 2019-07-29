#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
int _putchar(char c);
void _puts(char *str);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(const char *s);
char *convert_uint(unsigned int number, int base, unsigned short uppercase);
char *convert_ulong(unsigned long number, int base, unsigned short uppercase);
void rev_string(char *s);
char *rot13(char *arr);
int switch_fun(const char *format, va_list valist, ...);
int _printf(const char *format, ...);
int check_mandatory(char tmp, va_list valist, int i);
int check_advanced(char tmp, va_list valist, int i);

#endif /* HOLBERTON_H_ */
