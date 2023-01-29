/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:47:46 by filhan            #+#    #+#             */
/*   Updated: 2022/10/18 14:52:16 by filhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char harf;
	harf = 'A';
	
	while (harf <= 'Z')
	{
		write (1, &harf, 1);
		harf++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
