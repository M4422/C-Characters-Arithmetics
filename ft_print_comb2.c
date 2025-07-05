void ft_putchar(char c);


void	ft_print_comb2(void)
{
	int i = 1;
	int j = 1;
	
	char ch1 = '0';
	char ch2 = '0';
	char ch3 = '0';
	char ch4 = '0';
	while(i <=100)
	{
	
		while(j <= 100)
		{ 
			if(ch1 != ch3 )
			{
				ft_putchar(ch1);
				ft_putchar(ch2);
				ft_putchar(' ');
				ft_putchar(ch3);
				ft_putchar(ch4);
				ft_putchar(',');
				ft_putchar('\n');
				
				
			}
			else if (ch2 != ch4)
			{
				ft_putchar(ch1);
				ft_putchar(ch2);
				ft_putchar(' ');
				ft_putchar(ch3);
				ft_putchar(ch4);
				ft_putchar(',');
				ft_putchar('\n');
				

			}

			if(ch4 != '9')
			{
				ch4++;
			}
			else
			{
				ch4= '0';
			}

			if(j % 10 == 0 || j % 100 == 0)
			{
				if(ch3 == '9')
				{
				ch3 = '0';
				}	
				ch3++;
			}
			
			j++;
		}

		j =1 ;	
		ch3 = '0';
		ch4 = '0';
		
		if(i % 10 == 0 || i % 100 == 0)
		{
			ch1++;
		}
		if(ch2 == '9')
		{
			ch2 = '0';
		}
		ch2++;
		i++;
	}
}

int main ()
{
ft_print_comb2();
}
