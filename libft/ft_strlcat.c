/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:14:07 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:14:08 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t len;
    size_t i;

    i = 0;
    len = ft_strlen(dst);
    while (src[i] != 0 && size > i)
    {
        dst[len] = src[i];
        i++;
        len++;
    }
    dst[len] = '\0';
    return (len);
}
