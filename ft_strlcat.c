/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadamik <aadamik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:10:55 by aadamik           #+#    #+#             */
/*   Updated: 2023/11/15 14:40:06 by aadamik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char resrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (destsize > 0)
		dest[i] = '\0';
	while (src[j] != '\0')
	{
		i++;
		j++;
	}
	return (i);
}
