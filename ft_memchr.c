/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:07:15 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/10 16:38:33 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char* p = (unsigned char *) s;
    unsigned char ch = (unsigned char)c;
    
    size_t i = 0;
    while(i < n)
    {
        if(p[i] == c)
        {
            return (void *)(p);
        }
        i++;
        p++;
    }
    return NULL;
}