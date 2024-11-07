#include <unistd.h>
/**
 * _print_rev_recursion - check desc
 * @s: string
 * desc: recursive reverse string
 * Return: 1
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;
	_print_rev_recursion(s + 1);
	write(1, &s[i], 1);
}
