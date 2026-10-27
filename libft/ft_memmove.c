/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:13:31 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:13:32 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!src && !dest)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
		ft_memcpy(dest, src, n);
	else
	{
		d = d + n;
		s = s + n;
		while (n)
		{
			*--d = *--s;
			n--;
		}
	}
	return (dest);
}
