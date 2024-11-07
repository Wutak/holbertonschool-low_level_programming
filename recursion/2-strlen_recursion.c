/**
 * _strlen_recursion - check desc
 * @s: string
 * desc: strlen recursion
 * Return: c
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	else
		return 1 + _strlen_recursion(s + 1);
}

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
