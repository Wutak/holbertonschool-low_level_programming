#include <stdarg.h>
/**
 * sum_them_all - sum of all caracters
 * @n: number of arguments
 * Return: s
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int s = 0;
	int i = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		s += va_arg(args, unsigned int);
		i++;
	}

	va_end(args);
	return (s);
}
