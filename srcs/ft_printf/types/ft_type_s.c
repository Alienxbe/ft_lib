/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 20:27:12 by maykman           #+#    #+#             */
/*   Updated: 2022/08/06 22:23:11 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "__ft_printf__.h"

int	ft_type_s(t_tag tag, va_list args)
{
	char	*s;

	s = (char *)va_arg(args, char *);
	if (!s)
		s = NULL_STR;
	if (tag.flags & FLAG_PRECISION)
		s = ft_substr(s, 0, tag.prec);
	else
		s = ft_strdup(s);
	return (ft_print(s, tag));
}
