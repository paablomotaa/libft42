/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:42:58 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/10 15:01:40 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	a;
	int	sign;
	int	result;

	a = 0;
	result = 0;
	sign = 1;
	while (str[a] == ' ' || (str[a] >= '\t' && str[a] <= '\r'))
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			sign = -sign;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		result = result * 10 + (str[a] - '0');
		a++;
	}
	return (result * sign);
}
