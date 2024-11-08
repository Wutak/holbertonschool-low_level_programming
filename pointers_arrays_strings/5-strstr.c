/**
 * _strstr - check Description
 * @haystack: string
 * @needle: string
 * Description: string in string
 * Return: 1
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int v = 0;

	while (haystack[i] != '\0')
	{
		v = 0;
		while (needle[v] != '\0')
		{
			while (needle[v] == haystack[i])
			{
				if (needle[v] == '\0')
					return (needle);
				v++;
				i++;
			}
			v++;
		}
		i++;
	}
	return (0);
}
