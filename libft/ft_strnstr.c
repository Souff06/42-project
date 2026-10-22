/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:14:21 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:14:22 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i, j;

    i = 0;
    j = 0;
    if (little[0] == '\0')
        return ((char*) big);
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (big[i + j] == little[j] && (i + j) < len)
        {
            if (little[j + 1] == '\0')
                return ((char *)&big[i]);
            j++;
        i++;
        }
    }
    return (NULL);
}
