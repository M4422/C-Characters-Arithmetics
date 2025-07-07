#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_chain(char *A, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (A[i] >= A[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	increment(char *A, int power, int i, int n)
{
	int	count;

	count = 0;
	while (count < n)
	{	
		power = power / 10;
		if (i % power == 0 && A[count] != '9' + 1)
		{
			A[count] += 1;
		}
		if (A[count] == '9' + 1)
		{
			A[count] = '0';
		}	
		count++;
	}
}

void	put_group(char *A, int n)
{
	int	i;
	
	i = 0;
	while (i < n)
	{
		ft_putchar(A[i]);
		i++;
	}
	if (A[0] == '9' - n + 1)
		ft_putchar('\n');
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	
}

void	ft_print_combn(int n)
{
	char	chs[9];
	int		i;
	int		power;
	int		k;

	i = 0;
	k = 1;
	power = 1;
	while (i < n)
	{		
		if (n != 1 && i != n - 1)
			k = k * 10 + i + 2;
		chs[i] = '0' + i;
		power = power * 10;
		i++;
	}
	i = k ;
	while (i <= power)
	{
		if (check_chain(chs, n))
			put_group(chs, n);
		increment(chs, power, i, n);
		i++;
	}
}

int main ()
{
	ft_print_combn(9);
}
