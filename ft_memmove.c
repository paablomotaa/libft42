/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:36:25 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/10 16:38:43 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    size_t i;

    if(d < s)
    {
        i = 0;
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else if(d > s)
    {
        i = n - 1;
        while(i > 0)
        {
            d[i] = s[i];
            i--;
        }
    }

    return (dest);
}