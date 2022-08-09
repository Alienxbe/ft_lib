/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:27:19 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:26:13 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>
#include "ft_string.h"

char	*ft_strjoinx(int n, ...)
{
	va_list	args;
	char	*final_str;
	char	*tmp;
	int		i;

	va_start(args, n);
	final_str = NULL;
	tmp = NULL;
	i = -1;
	while (++i < n)
	{
		if (!final_str)
			final_str = ft_strdup(va_arg(args, char *));
		else
		{
			tmp = ft_strjoin(final_str, va_arg(args, char *));
			free(final_str);
			if (!tmp)
				break ;
			final_str = tmp;
		}
	}
	va_end(args);
	return (final_str);
}
