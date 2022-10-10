/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 23:44:29 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/07 05:00:30 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t					i;
	const unsigned char		*s;
	unsigned char			*d;

	i = 0;
	s = src;
	d = dest;
	if (d > s)
	{
		while (n-- > 0)
			d[i] = s[i];
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (d);
}