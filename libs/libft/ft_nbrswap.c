/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdal-can <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 13:02:26 by bdal-can          #+#    #+#             */
/*   Updated: 2017/03/16 12:03:10 by bdal-can         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_nbrswap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}
