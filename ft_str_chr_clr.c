/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_chr_clr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cormund <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 18:45:21 by cormund           #+#    #+#             */
/*   Updated: 2019/05/08 09:54:17 by cormund          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_str_chr_clr(char *s, char c)
{
	char	*p;

	if ((p = ft_strchr(s, c)))
		ft_strcpy(s, p + 1);
	else
		ft_strclr(s);
}
