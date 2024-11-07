/**
 * _strlen_recursion - check desc
 * @s: string
 * desc: strlen recursion
 * Return: c
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
