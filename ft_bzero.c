/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:13:12 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/10 16:38:26 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *p;

    p = (unsigned char *)s;
    i = 0;
    while(i < n)
    {
        p[i] = '0';
        i++;
    }
    return (s);
}