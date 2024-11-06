/**
 * _strspn - check the description
 * @s: string
 * @accept: compteur
 * Description: print memory s
 * Return: 1
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int count = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (count);
}
