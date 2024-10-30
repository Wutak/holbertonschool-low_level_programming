/**
 * _strlen - Entry
 * @str: input
 * Desrciption: strlen
 * Return: 1.
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - Entry
 * @s: input
 * Description: reverse string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int a;
	int z = _strlen(s) - 1;
	char tmp;

	a = 0;
	while (a < z)
	{
		tmp = s[a];
		s[a] = s[z];
		s[z] = tmp;
		a++;
		z--;
	}
}
