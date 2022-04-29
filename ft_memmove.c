/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmalhotr <kmalhotr@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:12:28 by kmalhotr          #+#    #+#             */
/*   Updated: 2022/02/04 17:16:11 by kmalhotr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*r_dst;
	unsigned char	*s;
	unsigned char	*r_src;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s > d)
	{
		ft_memcpy(d, s, len);
	}
	else
	{
		r_dst = d + len - 1;
		r_src = s + len - 1;
		while (len-- > 0)
			*r_dst-- = *r_src--;
	}
	return (dst);
}
