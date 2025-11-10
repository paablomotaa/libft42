/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:04:01 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/10 15:11:21 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int			i;
	const char	*last;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			last = &s[i];
		i++;
	}
	return ((char *)last);
}

/*#include <stdio.h>

int main()
{
    printf("%s", strrchr("hola que tal", 108));
}*/
