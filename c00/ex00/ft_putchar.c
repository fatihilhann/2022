#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 10);
}

int		main(void)
{
	char a;
	a = 10;
	while (a >=0){
		a--;
	}
	ft_putchar('fat');
	return (0);
}
