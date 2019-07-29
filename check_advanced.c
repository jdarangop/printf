#include "holberton.h"
/**
  * check_advanced - Function to excecute the switch.
  * @tmp: Character to compare.
  * @valist: List of arguments.
  * @i: Counter.
  * Return: The i incremented.
  */

int check_advanced(char tmp, va_list valist, int i)
{
	unsigned int c;
	unsigned long ul;

	switch (tmp)
	{
		case 'u':
			c = va_arg(valist, unsigned int);
			_puts(convert_uint(c, 10, 0));
			break;
		case 'o':
			c = va_arg(valist, unsigned int);
			_puts(convert_uint(c, 8, 0));
			break;
		case 'x':
			c = va_arg(valist, unsigned int);
			_puts(convert_uint(c, 16, 0));
			break;
		case 'X':
			c = va_arg(valist, unsigned int);
			_puts(convert_uint(c, 16, 1));
			break;
		case 'p':
			ul = va_arg(valist, unsigned long);
			_putchar(48);
			_putchar(120);
			_puts(convert_ulong(ul, 16, 0));
			break;
	}
	return (i);
}
