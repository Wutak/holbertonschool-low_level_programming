/**
 * factorial - check desc
 * @n: number
 * desc: factorial n
 * Return: n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
