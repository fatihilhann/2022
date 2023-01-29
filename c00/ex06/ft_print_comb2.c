/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:40:18 by filhan            #+#    #+#             */
/*   Updated: 2022/10/22 13:58:01 by filhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar (48 + a / 10);
			ft_putchar (48 + a % 10);
			ft_putchar (' ');
			ft_putchar (48 + b / 10);
			ft_putchar (48 + b % 10);
			if (a != 98)
			{
				write (1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb2();
	return (0);
}
