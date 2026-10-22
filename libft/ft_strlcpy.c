/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:14:10 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:14:11 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
     size_t i;

    i = 0;
    while (src[i] != 0 && size > 0)
    {
            dst[i] = src[i];
            i++;
            size--;
    }
    dst[i] = '\0';
    return (i);
}
