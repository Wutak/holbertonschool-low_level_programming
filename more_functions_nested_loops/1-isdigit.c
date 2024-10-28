/**
 * int _isdigit - Entry
 * @c: input
 * Description: check digit
 * Return: 1, 0.
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
