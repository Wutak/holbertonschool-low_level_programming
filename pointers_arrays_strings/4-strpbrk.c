/**
 * _strpbrk - check description
 * @s: string
 * @accept: string
 * Description: string pointer break
 * Return: s, 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int v;
	unsigned int c;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		v = 0;
		while (accept[v] != '\0')
		{
			if (accept[v] == s[i])
				return (s + c);
			v++;
		}
		c++;
		i++;
	}
	return (0);
}
