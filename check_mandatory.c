#include "holberton.h"

/**
  * check_mandatory - Function to execute the switch.
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
			return (1);
		case 's':
			s = va_arg(valist, char *);
			_puts(s);
			return (1);
		case '%':
			_putchar('%');
			return (1);
		case 'd': case 'i':
			c = va_arg(valist, int);
			if (c < 0)
			{
				c = -c;
				_putchar('-');
			}
			_puts(convert_uint(c, 10, 0));
			return (1);
		case 'b':
			c = va_arg(valist, unsigned long);
			_puts(convert_ulong(c, 2, 0));
			return (1);
	}
	return (0);
}
