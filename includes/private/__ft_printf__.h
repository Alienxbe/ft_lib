/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __ft_printf__.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 22:20:13 by mykman            #+#    #+#             */
/*   Updated: 2022/08/06 23:36:59 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_PRINTF___H
# define __FT_PRINTF___H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# include "ft_ctype.h"
# include "ft_math.h"
# include "ft_memory.h"
# include "ft_stdio.h"
# include "ft_string.h"

# define FLAG_PRECISION		1
# define FLAG_ZERO			2
# define FLAG_MINUS			4
# define FLAG_HASHTAG		8
# define FLAG_SPACE			16
# define FLAG_PLUS			32
# define FLAGS				"0-# +"
# define TYPES				"cspdiuxX%"
# define INTEGER_TYPES		"diuxX"
# define NULL_STR			"(null)"
# define INT_MAX_STR		"2147483647"

# define FT_PRINTF_ERROR	-1

typedef enum e_type
{
	NONE = -1,
	CHAR,
	STR,
	PTR,
	D_INT,
	I_INT,
	U_INT,
	LC_HEXA,
	UC_HEXA,
	PCT,
	LENGTH
}	t_type;

typedef struct s_tag
{
	int		flags;
	int		prec;
	int		width;
	int		fd;
	t_type	type;
}	t_tag;

typedef int	(*t_print)(t_tag, va_list);

/*
** Main functions
*/

int		ft_printf(const char *format, ...);
int		ft_fprintf(int fd, const char *format, ...);
int		ft_conversion(int fd, const char **format, va_list args);
t_tag	ft_set_tag(int fd, const char **format);

/*
** Types functions
*/

int		ft_print(char *str, t_tag tag);
int		ft_type_c(t_tag tag, va_list args);
int		ft_type_s(t_tag tag, va_list args);
int		ft_type_p(t_tag tag, va_list args);
int		ft_type_d(t_tag tag, va_list args);
int		ft_type_i(t_tag tag, va_list args);
int		ft_type_u(t_tag tag, va_list args);
int		ft_type_lx(t_tag tag, va_list args);
int		ft_type_ux(t_tag tag, va_list args);
int		ft_type_pct(t_tag tag, va_list args);

/*
** Utils functions
*/

char	*filling_zeroes(char *s, const char *prefix, t_tag tag);
char	*precision_condition(size_t n, t_tag tag, const char *base);

#endif