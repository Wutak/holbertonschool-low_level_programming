/**
 * _strchr - check description
 * @s: string
 * @c: character
 * Description: string character
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	if (s[i] == c)
		return (s + 1);
	else
		return (NULL);
}
