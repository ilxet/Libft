/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aadamik <aadamik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:17:35 by aadamik           #+#    #+#             */
/*   Updated: 2023/11/14 23:42:20 by aadamik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int		i;
	char	*temp;

	i = 0;
	while (i < len)
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}
