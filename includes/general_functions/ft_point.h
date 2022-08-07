/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:38:56 by mykman            #+#    #+#             */
/*   Updated: 2022/08/07 23:19:40 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

t_point	new_point(int x, int y);
t_point	add_point(t_point p1, t_point p2);
t_point	sub_point(t_point p1, t_point p2);
int		isbigger_point(t_point p1, t_point p2);
int		issmaller_point(t_point p1, t_point p2);
void	print_point(t_point p);

#endif