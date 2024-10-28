void print_triangle(int size)
{
	int i;
	int v;
	int n;

	i = 0;
	n = size
	if (size <= 0)
		write(1, "\n", 1);
	while(i < size)
	{
		v = 0;
		while(v < n - 1)
		{
			write(1, " ", 1);
			v++;
		}
		while(n < size)
		{
			write(1, "#", 1);
			n++;
		}
		write(1, "\n", 1);
	}
}
