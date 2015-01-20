/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccrapat <ccrapat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 19:03:02 by ccrapat           #+#    #+#             */
/*   Updated: 2015/01/20 00:02:30 by ccrapat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

#include <stdlib.h>
#include <mlx.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <libft.h>

typedef	struct		s_stock
{
	int					*line;
	struct s_stock		*prev;
	struct s_stock		*next;
}					t_stock;

typedef struct    s_data
{
	    void          *mlx_ptr;
		void  	 	    *mlx_win;
		char			*line;
}                 t_data;

#endif
