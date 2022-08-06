/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 19:52:27 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:19:50 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_intsize(long n)
{
	if (n < 0)
		return (ft_intsize(-n) + 1);
	if (n < 10)
		return (1);
	return (ft_intsize(n / 10) + 1);
}
