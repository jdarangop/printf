#include "holberton.h"

/**
  * switch_fun - Switch the tags for print in its format.
  * @format: Format passed.
  * @valist: List of arguments.
  *
  * Return: void.
  */


int switch_fun(const char *format, va_list valist, ...)
{
	const char *tmp;
	int i;

	for (tmp = format, i = 0; *tmp != '\0'; tmp++)
	{
		while (*tmp != '%')
		{
			if (*tmp == '\0')
			{
				return (i);
			}
			_putchar(*tmp);
			tmp++;
			i++;
		}

		tmp++;
		i++;

		i = check_mandatory(*tmp, valist, i);
		i = check_advanced(*tmp, valist, i);
	}
	return (i);
}
