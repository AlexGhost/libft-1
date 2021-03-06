/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:53:07 by scornaz           #+#    #+#             */
/*   Updated: 2018/04/16 20:02:09 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE		64

# include <sys/types.h>
# include <limits.h>
# include <stdio.h>
# include "../libft.h"
# include "unistd.h"
# include <fcntl.h>

int			get_next_line(int fd, char **line);
char		*get_file_comment(char *path, char com_char);

#endif
