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
	while (n)
	{
		s[n -1] = b;
		n--;
	}
	return (s);
}
