/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 12:57:02 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/28 13:02:38 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_point	size;

	size = get_term_size();
    printf ("lines %d\n", size.x);
    printf ("columns %d\n", size.y);
}
