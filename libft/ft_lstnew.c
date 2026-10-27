/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:13:12 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:13:13 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nv;

	nv = malloc(sizeof(t_list));
	if (!nv)
		return (NULL);
	nv->content = content;
	nv->next = NULL;
	return (nv);
}
