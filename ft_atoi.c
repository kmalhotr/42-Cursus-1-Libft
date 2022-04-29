/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmalhotr <kmalhotr@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:32:04 by kmalhotr          #+#    #+#             */
/*   Updated: 2022/04/21 20:21:24 by kmalhotr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	escsq(int c)
{
	if (c == ' ' || c == '\r' || c == '\f' || c == '\v'
		|| c == '\n' || c == '\t')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	n;

	n = 0;
	sign = 1;
	while (escsq(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = (n * 10) + (*str - '0');
		str++;
	}
	n = n * sign;
	if (n >= -2147483648 && n <= 2147483647)
		return (n);
	if (sign == -1)
		return (0);
	return (-1);
}
