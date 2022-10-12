/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:00:51 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/07 06:08:49 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (str)
	{
		if (*str == ch)
			return ((char *)str);
		if (*str == '\0')
			return (NULL);
		++str;
	}
	return (NULL);
}
