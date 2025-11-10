/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:41:42 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/10 14:57:14 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	destlength;
	unsigned int	srclength;
	unsigned int	i;

	destlength = 0;
	srclength = 0;
	while (destlength < size && dest[destlength] != '\0')
		destlength++;
	while (src[srclength] != '\0')
		srclength++;
	if (destlength == size)
		return (size + srclength);
	i = 0;
	while ((destlength + i + 1) < size && src[i] != '\0')
	{
		dest[destlength + i] = src[i];
		i++;
	}
	dest[destlength + i] = '\0';
	return (destlength + srclength);
}
