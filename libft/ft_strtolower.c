/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvanessa <tvanessa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 22:49:53 by tvanessa          #+#    #+#             */
/*   Updated: 2019/09/17 00:06:47 by tvanessa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strtolower(char *s)
{
	if (!s || !*s)
		return ;
	if (*s >= 'A' && *s <= 'Z')
		*s += 'a' - 'A';
	ft_strtolower(s + 1);
}
