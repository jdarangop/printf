/**
  * _strlen - Return the len of a string.
  * @s: The string.
  * Return: Lenght of a string.
  */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

