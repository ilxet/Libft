/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadamik <aadamik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:32:00 by aadamik           #+#    #+#             */
/*   Updated: 2023/11/14 18:54:11 by aadamik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = c;
		i++;
	}
	return (str);
}

// int main () 
// {
//    char str[50];

//    strcpy(str,"This is string.h library function");
//    puts(str);
//    memset(str,'$',7);
//    puts(str);
//    ft_memset(str,'$',7);
//    puts(str);
//    return(0);
// }