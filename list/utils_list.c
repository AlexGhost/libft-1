/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2018/01/21 12:16:46 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/21 12:16:48 by scornaz          ###   ########.fr       */
=======
/*   Created: 2018/01/17 17:04:59 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/17 17:05:01 by scornaz          ###   ########.fr       */
>>>>>>> cddf03c3f17e2d501e77932475d39ac8cef2f739
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes.h"

void	ft_lstprint(t_list *el)
{
	write(1, el->content, ft_strlen(el->content));
	write(1, " ", 1);
}
