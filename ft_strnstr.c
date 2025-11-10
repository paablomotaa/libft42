/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmota-ga <pmota-ga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:27:43 by pmota-ga          #+#    #+#             */
/*   Updated: 2025/11/10 16:38:17 by pmota-ga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strnstr(const char *big, const char *tittle, size_t len)
{
    size_t i;
    size_t j;

    if(!tittle[0])
        return ((char *) big);
    i = 0;
    while(i < len && big[i] != '\0')
    {
        j = 0;
        while(i + j < len && big[i+j] != '\0' && tittle[j] != '\0' && big[i+j] == tittle[j])
        {
            j++;
        }
        if(tittle[j] == '\0')
            return ((char *)&big[i]);
        i++;
    }
    return (NULL);
}