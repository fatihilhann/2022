/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:03:31 by filhan            #+#    #+#             */
/*   Updated: 2022/11/01 19:03:46 by filhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	if (base[i] == '\0' || ft_strlen (base) < 2)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		base_size;
	long	number;

	number = nbr;
	base_size = ft_strlen (base);
	if (check_base (base) == 0)
	{
		i = 0;
		while (base[i] == '\0')
			i++;
		if (number < 0)
		{
			print ('-');
			number = number * -1;
		}
		if (number < base_size)
			print (base[number]);
		if (number >= base_size)
		{
			ft_putnbr_base (number / base_size, base);
			ft_putnbr_base (number % base_size, base);
		}
	}
}

int        main(void)
{
    ft_putnbr_base(-12, "01");
    printf("\n");
    ft_putnbr_base(40, "poneyvif");
    printf("\n");
    ft_putnbr_base(894867, "0123456789");
    printf("\n");
    ft_putnbr_base(53, "0123456789abcdef");
}
