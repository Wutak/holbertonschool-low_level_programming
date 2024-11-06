/**
 * _strchr - Entry
 * @s: input
 * @c: input
 * Description: strchr
 * Return: 1, 0
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
	{
		if (s[i] != c)
			i++;
		else
			return (s);
	}
	return (NULL);
}
