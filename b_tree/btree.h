/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 10:26:06 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/26 17:25:54 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

# include "stdlib.h"

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*data;
}					t_btree;

t_btree				*new_btree(void *data);
void				btree_apply_prefix(t_btree *root, void
									(*apply)(void *data));
void				print_btree(t_btree *root);
void				btree_insert(t_btree **root, void *item,
								int (*cmpf)(void*, void*));
void				*btree_search_item(t_btree *root, void *data_ref,
									int (*cmpf)(void*, void*));
int					btree_level_count(t_btree *root);
void				btree_apply_level(t_btree *root,
						void (*apply)(void *item, int depth, int is_first));

#endif
