/**
 * _memset - check desciption
 * @s: memory area
 * @b: caractere
 * @n: size
 * Description: print memory
 * Return: pointer
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
