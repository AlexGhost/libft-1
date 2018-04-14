/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 18:38:48 by scornaz           #+#    #+#             */
/*   Updated: 2018/04/10 18:38:48 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long		atoi_base(const char *str, int base)
{
	long		res;
	const char	*digits;

	digits = "0123456789ABCDEF";
	res = 0;
	while (*str && ft_isdigit(*str))
	{
		res = (res * base) +
			(ft_strchr(digits, *str) - digits);
		++str;
	}
	return (res);
}

int				ft_atoi(const char *str)
{
	long	res;
	int		neg;

	neg = 0;
	while (ft_issep(*str))
		str++;
	if (*str == '+' || (neg = (*str == '-')))
		str++;
	if (str[1] == 'x')
		res = atoi_base(str + 2, 16);
	else
		res = atoi_base(str, 10);
	return ((int)(neg ? -res : res));
}

float			ft_atof(const char *str)
{
	int			int_part;
	float		float_part;
	char		*cpy;
	char		*mark;

  mark = ft_strchr(str, '.');
  if (mark && *mark)
    {
      cpy = ft_strsub(str, 0, mark - str);
      int_part = ft_atoi(cpy);
      ++mark;
      float_part = ft_atoi(mark);
      if (!int_part && cpy[0] == '-')
          float_part = -float_part;
      free(cpy);
    }
  else
    {
      int_part = ft_atoi(str);
      float_part = 0;
    }
  return ((float)int_part + float_part / ft_pow(ft_nbrsize(float_part), 10));
}