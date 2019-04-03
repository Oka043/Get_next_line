/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaktion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 00:44:33 by olaktion          #+#    #+#             */
/*   Updated: 2018/03/30 15:25:02 by olaktion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "./libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# define BUFF_SIZE 42

typedef struct	s_f
{
	int			fd;
	char		*buf;
}				t_f;
int				get_next_line(const int fd, char **line);

#endif
