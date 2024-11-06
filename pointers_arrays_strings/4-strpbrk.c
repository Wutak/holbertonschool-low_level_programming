char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;

	while(s[i] != '\0')
	{
		while(
