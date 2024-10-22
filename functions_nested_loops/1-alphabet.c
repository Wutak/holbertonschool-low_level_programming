#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void  print_alphabet(void)
{
	write(1, "abcdefghijklmnoparstuvwxyz\n", 27);
}

int main(void)
{
	print_alphabet();
	return (0);
}
