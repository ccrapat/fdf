/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccrapat <ccrapat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 18:59:18 by ccrapat           #+#    #+#             */
/*   Updated: 2015/01/20 00:45:24 by ccrapat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fdf.h>

void	ft_split_line(char *str)
{
	char		**cut_line;
	int			i;
	
	i = 0;
	cut_line = ft_strsplit(str, ' ');
	while (cut_line[i])
	{
		ft_putstr(cut_line[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	char 		*str;
	int			fd;

	fd = open(av[1], O_RDONLY);
	(void)ac;
	while ((get_next_line(fd, &str)) == 1)
	{
		ft_split_line(str);
		free(str);
	}
	close(fd);
	return (0);
}
