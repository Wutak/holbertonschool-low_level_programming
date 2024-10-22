#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 27);
	write(1, "\n", 1);
	write(1, "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n", 27);
	return (0);
}
