/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <cormund@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 01:46:18 by ksharlen          #+#    #+#             */
/*   Updated: 2019/09/27 13:51:55 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strnlen(const char *str, int n)
{
	const char	*l;

	l = str;
	if (str)
	{
		while (*l && *l != n)
			l++;
	}
	return (l - str);
}
