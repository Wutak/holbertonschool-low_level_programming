/**
 * _strspn - check description
 * @s: string
 * @accept: reference bytes container
 * Description: counting bytes
 * Return: Bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int c;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		while (accept[i] != '\0')
		{
			if (accept[i] == s[i])
				c++;
			else if ((accept[i + 1]) == '\0')
				return (c + 1)
		}
		i++;
	}
	return (c);
}
