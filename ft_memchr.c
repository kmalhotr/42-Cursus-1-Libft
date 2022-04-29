/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmalhotr <kmalhotr@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:10:17 by kmalhotr          #+#    #+#             */
/*   Updated: 2021/10/17 14:58:07 by kmalhotr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	sn;

	sn = 0;
	while (sn < n)
	{
		if (*((unsigned char *)s + sn) == (unsigned char)c)
			return ((void *)s + sn);
		sn++;
	}
	return (NULL);
}
