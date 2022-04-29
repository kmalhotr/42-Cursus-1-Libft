/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmalhotr <kmalhotr@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:34:39 by kmalhotr          #+#    #+#             */
/*   Updated: 2022/04/06 20:32:00 by kmalhotr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sp;
	unsigned int	i;

	i = 0;
	if (start > ft_strlen((char *)s) || len <= 0)
		return (ft_strdup(""));
	if ((start + len) > ft_strlen(s))
		sp = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		sp = (char *)malloc((len + 1) * sizeof(char));
	while (!s || !sp)
		return (NULL);
	while (start < ft_strlen((char *)s) && s[start + i] && i < len)
	{
		sp[i] = s[start + i];
		i++;
	}
	sp[i] = '\0';
	return (sp);
}
