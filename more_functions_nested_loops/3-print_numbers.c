#include <unistd.h>
/**
 * print_numbers - Entry
 * Description: print numbers
 * Return: Nothing.
 */
void print_numbers(void)
{
	write(1, "0123456789\n", 11);
}
