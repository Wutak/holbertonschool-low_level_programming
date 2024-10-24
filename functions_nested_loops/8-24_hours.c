#include <unistd.h>
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
			write(1, "h / 10) + '0'", 1);
			write(1, "h % 10) + '0'", 1);
			write(1, ":", 1);
			write(1, "m / 10) + '0'", 1);
			write(1, "m % 10) + '0'", 1);
			write(1, "\n", 1);
			m++;
		}
		h++;
		m = 0;
	}
}
