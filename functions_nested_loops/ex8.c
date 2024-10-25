#include <unistd.h>
/**
 * jack_bauer - Entry.
 * Description: clock.
 * Return: Nothing.
 */
void jack_bauer(void)
{
	char h1;
	char h2;
	char m1;
	char m2;

	m1 = '0';
	m2 = '0';
	h1 = '0';
	h2 = '0';
	while ((h2 <= '2' && h1 <= '3') && (m2 <= '5' && m1 <= '9'))
	{
		if (h1 == '9')
		{
			while (m2 <= '5' && m1 <= '9')
			{
				if (m1 == '9')
				{
					write(1, &h2, 1);
					write(1, &h1, 1);
					write(1, ":", 1);
					write(1, &m2, 1);
					write(1, &m1, 1);
					write(1, "\n", 1);
					m1 = '0';
					m2++;
				}
			       	else
				{
					write(1, &h2, 1);
					write(1, &h1, 1);
					write(1, ":", 1);
					write(1, &m2, 1);
					write(1, &m1, 1);
					write(1, "\n", 1);
					m1++;
				}
			}
			h2++;
			h1 = '0';
			m2 = '0';
		}
		else
		{
			while (m2 <= '5' && m1 <= '9') 
			{
				if (m1 == '9')
				{
					write(1, &h2, 1);
				       	write(1, &h1, 1);
					write(1, ":", 1);
					write(1, &m2, 1);
					write(1, &m1, 1);
					write(1, "\n", 1);
					m1 = '0';
					m2++;
			 	}
				else
				{
					write(1, &h2, 1);
					write(1, &h1, 1);
					write(1, ":", 1);
					write(1, &m2, 1);
					write(1, &m1, 1);
					write(1, "\n", 1);
					m1++;
				}
			}
			h1++;
			m2 = '0';
		}
	}
}
int main(void)
{
	jack_bauer();
	return(0);
}
