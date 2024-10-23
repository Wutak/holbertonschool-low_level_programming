/**
 * _isalpha - Entry point.
 * @c: input.
 * Description: alphabetic.
 * Return: 1 (Succes), 0.
 */
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}
