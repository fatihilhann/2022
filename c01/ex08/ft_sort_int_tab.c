/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:27:50 by filhan            #+#    #+#             */
/*   Updated: 2022/10/23 17:00:35 by filhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	new;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				new = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = new;
				i = -1;
			}
			i++;
		}
		size--;
	}
}

int	main()
{
	int tab[6] = {7, 6, 3, 4, 2, 5};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	return (0);
}	
