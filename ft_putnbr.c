#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}


void	ft_putnbr(int nb)
{

	long num = nb;

	if (num < 0)
	{
		ft_putchar('-');
		num = num * -1;
	}
	if(num >= 10)
	{
		ft_putnbr(num / 10);
		num = num % 10;
	}
	if(num < 10)
	{
		ft_putchar('0'+ num);
	}


}


int main()
{
ft_putnbr(-2147483648);
}
