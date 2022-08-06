/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 23:06:47 by maykman           #+#    #+#             */
/*   Updated: 2022/08/06 22:23:24 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "__ft_printf__.h"

static const char	*get_prefix(int n, int flags)
{
	if (n < 0)
		return ("-");
	else if (flags & FLAG_PLUS)
		return ("+");
	else if (flags & FLAG_SPACE)
		return (" ");
	return (NULL);
}

int	ft_type_d(t_tag tag, va_list args)
{
	char			*s;
	const char		*prefix;
	int				n;
	unsigned int	un;

	n = va_arg(args, int);
	un = n;
	if (n < 0)
		un = -n;
	prefix = get_prefix(n, tag.flags);
	s = precision_condition(un, tag, BASE_DECI);
	s = filling_zeroes(s, prefix, tag);
	s = ft_addprefix(s, prefix);
	return (ft_print(s, tag));
}
