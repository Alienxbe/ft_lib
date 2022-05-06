/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_lx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maykman <maykman@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:28:12 by maykman           #+#    #+#             */
/*   Updated: 2022/05/06 23:46:04 by maykman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_type_lx(t_tag tag, va_list args)
{
	char			*s;
	const char		*prefix;
	unsigned int	n;

	n = va_arg(args, unsigned int);
	prefix = NULL;
	if (n && tag.flags & FLAG_HASHTAG)
		prefix = "0x";
	s = precision_condition(n, tag, BASE_HEXA_L);
	s = filling_zeroes(s, prefix, tag);
	s = ft_addprefix(s, prefix);
	return (ft_print(s, tag));
}
