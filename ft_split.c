/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmalhotr <kmalhotr@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:47:08 by kmalhotr          #+#    #+#             */
/*   Updated: 2022/04/21 19:43:52 by kmalhotr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = NULL;
	if (n == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (str == 0)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**freesp(char **arr)
{
	size_t	j;

	j = 0;
	while (arr[j])
	{
		free(arr[j]);
		j++;
	}
	free(arr);
	return (NULL);
}

size_t	wcount(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c)
			|| (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strarr;
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	k = 0;
	strarr = (char **)malloc(sizeof(char *) * (wcount(s, c) + 1));
	if (!strarr)
		return (NULL);
	while (i < wcount(s, c) && s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		j = k;
		while (s[k] != c && s[k] != '\0')
			k++;
		strarr[i] = ft_strndup(&s[j], k - j);
		if (strarr[i++] == 0)
			return (freesp(strarr));
	}
	strarr[i] = NULL;
	return (strarr);
}
