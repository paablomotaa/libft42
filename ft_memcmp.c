/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:22:50 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/10 16:38:37 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char * p1 = (unsigned char *)s1;
    unsigned char * p2 = (unsigned char *)s2;
    
    size_t i = 0;
    while(i < n)
    {
        if(p1[i] != p2[i])
        {
            return (p1[i] - p2[i]);
        }
        i++;
    }
    return 0;
}