/**
 * _memset - Entry
 * @s: input
 * @b: input
 * @n: input
 * Description: memset
 * Return: 1
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
