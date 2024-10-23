/**
 * _islower - Entry point
 * @c: input
 * Description: lowercase check
 * Return: 1 (Succes), 0.
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
