/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:42:16 by filhan            #+#    #+#             */
/*   Updated: 2022/10/23 16:33:03 by filhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int	*********nbr)
{
	*********nbr = 42;
}

int main()
{
	int a;
	int *ptr;
	int **ptr1;
	int ***ptr2;
	int ****ptr3;
	int *****ptr4;
	int ******ptr5;
	int *******ptr6;
	int ********ptr7;
	int *********ptr8;

	a = 21;

	ptr = &a;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	
	
	ft_ultimate_ft(nbr);
	printf("%d", n);
	return 0;
}
