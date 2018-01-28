/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 19:25:00 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 19:55:24 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../btree.h"
#include "libft.h"

#define	OPS "+" "-" "/" "*"
#define NB_OPS 4

int		cmpf(void *a, void *b)
{
	if (ft_bigstrcmp((char*)a, NB_OPS, "+", "-", "/", "*"))
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	t_btree *tree;

	tree = 0;
	++argv;
	while (*argv)
	{
		btree_insert(&tree, *argv, cmpf);
		++argv;
	}
	print_btree(tree);
}