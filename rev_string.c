#include "holberton.h"

/**
  * rev_string - Prints the string reversed.
  * @s: The string to be reversed.
  */

void rev_string(char *s)
{
	int i, j, tmp;

	j = _strlen(s) - 1;
	for (i = 0; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
