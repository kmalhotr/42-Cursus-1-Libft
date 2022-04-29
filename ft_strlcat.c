/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmalhotr <kmalhotr@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:28:03 by kmalhotr          #+#    #+#             */
/*   Updated: 2022/02/09 18:03:29 by kmalhotr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	left;
	size_t	dstlen;
	size_t	srclen;

	left = size;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (size + srclen);
	while (*dst != '\0' && left != 0)
	{
		dst++;
		left--;
	}
	while (left != 1 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		left--;
	}
	*dst = '\0';
	return (srclen + dstlen);
}
