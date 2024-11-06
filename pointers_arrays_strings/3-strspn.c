/**
 * _strspn - check description
 * @s: string
 * @accept: string
 * Description: counting bytes
 * Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int v;
	int c;

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
			v++;
		}
		if (accept[v] == '\0')
			break;
		i++;
	}
	return (c);
}
