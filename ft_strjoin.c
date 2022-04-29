/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmalhotr <kmalhotr@student.42abudhabi      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:56:55 by kmalhotr          #+#    #+#             */
/*   Updated: 2021/10/18 14:44:40 by kmalhotr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		l1;
	int		l2;
	int		i;
	int		is;

	l1 = ft_strlen ((char *)s1);
	l2 = ft_strlen ((char *)s2);
	s = malloc ((l1 + l2 + 1) * sizeof(char));
	i = 0;
	is = 0;
	if (!s1 || !s2 || !s)
		return (NULL);
	while (s1[i])
		s[is++] = s1[i++];
	i = 0;
	while (s2[i])
		s[is++] = s2[i++];
	s[is] = '\0';
	return (s);
}
