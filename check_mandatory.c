#include "holberton.h"

/**
  * miniswitch - Function to excecute the switch.
  * @tmp: Character to compare.
  * @valist: List of arguments.
  * @i: Counter.
  * Return: The i incremented.
  */

int check_mandatory(char tmp, va_list valist, int i)
{
	int c;
	char *s;

	switch (tmp)
	{
		case 'c':
			c = va_arg(valist, int);
			_putchar(c);
			break;
		case 's':
			s = va_arg(valist, char *);
			_puts(s);
			break;
		case '%':
			_putchar('%');
			break;
		case 'd': case 'i':
			c = va_arg(valist, int);
			if (c < 0)
			{
				c = -c;
				_putchar('-');
			}
			_puts(convert_uint(c, 10, 0));
			break;
		case 'b':
			c = va_arg(valist, unsigned long);
			_puts(convert_ulong(c, 2, 0));
			break;
		default:
			return (i);
	}
	return (i);
}
