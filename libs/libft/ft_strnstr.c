/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdal-can <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 18:50:05 by bdal-can          #+#    #+#             */
/*   Updated: 2017/01/23 18:00:25 by bdal-can         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	a;

	if (little[0] == '\0')
		return ((char*)big);
	i = 0;
	c = 0;
	a = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[c])
		{
			if (++c == ft_strlen(little))
				return ((char*)big + (i + 1 - ft_strlen(little)));
			i++;
		}
		else
		{
			c = 0;
			a++;
			i = a;
		}
	}
	return (NULL);
}
