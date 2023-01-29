#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a  = 5;
	int b  = 2;
	int *div = &a;
	int *mod = &b;

	//ft_div_mod(a, b, div, mod);
	
	printf("%d",*div);
	printf("\n%d",*mod);
	return 0;
}
