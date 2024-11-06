/**
 * _memcpy - Entry
 * @dest: input
 * @src: input
 * @n: input
 * Description: memcpy
 * Return: 1
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}
