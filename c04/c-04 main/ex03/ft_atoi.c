/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:30:37 by filhan            #+#    #+#             */
/*   Updated: 2022/11/01 20:33:15 by filhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
     while (str[i] && (str[i] == 43 || str[i] == 45))
    {
        if (str[i] == 45)
		{
            sign *= -1;
		}
		i++;
    }
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}

int main(void)
{
    char s[] = "  ---+--+012345068ab567";
    printf("%d", ft_atoi(s));
}
