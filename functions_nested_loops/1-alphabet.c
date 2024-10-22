#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void  print_alphabet(void)
{
	write(1, "abcdefghijklmnoparstuvwxyz\n", 27);
}
