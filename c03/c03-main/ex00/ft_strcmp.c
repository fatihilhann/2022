/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filhan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:01:54 by filhan            #+#    #+#             */
/*   Updated: 2022/10/25 12:02:14 by filhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = strcmp(cp1, cp2);

    if(ret<0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!");
    else if(ret>0) printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
    else printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");

    return 0;
}
