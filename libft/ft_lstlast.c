/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smghirat <smghirat@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:13:06 by smghirat          #+#    #+#             */
/*   Updated: 2026/10/22 14:13:07 by smghirat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_list *ft_lstlast(t_list *lst)
{
    while (lst->next)
    {
        lst = lst->next;
    }
    return (lst);
}
