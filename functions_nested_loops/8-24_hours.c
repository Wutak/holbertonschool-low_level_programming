#include <stdio.h>
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
			h = (h / 10) + '0';
			printf("%d", h);
			h = (h % 10) + '0';
			printf("%d", h);
			write(1, ":", 1);
			m = (m / 10) + '0';
			printf("%d", m);
			m = (m % 10) + '0';
			printf("%d", m);
			write(1, "\n", 1);
			m++;
		}
		h++;
		m = 0;
	}
}
