void	ft_putchar(char c);


void ft_print_comb(void)
{
	char c1 = '0';
	char c2 = '1';
	char c3 = '2';
	int x = 12;
	while(x <= 999)
	{
		if(c1 < c2)
		{
			if(c2 < c3)
			{
			ft_putchar(c1);
			ft_putchar(c2);
			ft_putchar(c3);
			ft_putchar(',');
			ft_putchar('\n');
			}
		}
		if(x % 100 ==0)
		{
			c1++;
		}
		if(x%10 == 0)
		{
			c2++;
		}
		
		if(c2 == '9')
		{
			c2= '0';
		}
		if(c3 == '9')
		{
			c3 = '0';
		}
		c3++;
		x++;
	}
}

int main ()
{
ft_print_comb();
}
