#include <unistd.h>
/**
 * ft_putchar - Entry
 * @c: input
 * Description: putchar
 * Return: Nothing
 */
void ft_putchar(char c)
{
	write(1, &c, 1);
}
/**
 * ft_putnbr - Entry
 * @nb: input
 * Description: putnbr
 * Return: Nothing
 */
void ft_putnbr(int nb)
{
	if (nb / 10 != 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}

/**
 * fizz_buzz - Entry
 * Description: fizz buzz
 * Return: Nothing
 */
void fizz_buzz(void)
{
	int i;
	int a;

	i = 1;
	while (i <= 100)
	{
		if (i >= 0 && i <= 9)
		{
			a = i + '0';

			if ((i % 3) == 0)
			{
				write(1, "Fizz", 4);
				if ((i % 5) == 0)
					write(1, "Buzz", 4);
			}
			else
				write(1, &a, 1);
		}
		else
		{
			if ((i % 3) == 0)
			{
				write(1, "Fizz", 4);
				if ((i % 5) == 0)
					write(1, "Buzz", 4);
			}
			else
			{
				ft_putnbr(i);
			}
		}
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

/**
 * main - Entry
 * Description: main
 * Return: 0.
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
