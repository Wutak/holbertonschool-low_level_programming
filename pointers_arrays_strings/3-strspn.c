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
			{
				c++;
				break;
			}
			else if (accept[i] == '\0')
				return (c - 1);
			v++;
		}
		i++;
	}
	return (c - 1);
}
