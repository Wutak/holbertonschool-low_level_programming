#include "main.h"
/**
 * jack_bauer - Entry.
 * Description: clock.
 * Return: Nothing.
 */
void jack_bauer(void)
{
	int m;
	int h;

	m = 0;
	h = 0;
	while (h < 24)
	{
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(":");
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar("\n");
			m++;
		}
		h++;
		m = 0;
	}
}
