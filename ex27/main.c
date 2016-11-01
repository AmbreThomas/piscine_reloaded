/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 22:52:54 by athomas           #+#    #+#             */
/*   Updated: 2016/07/26 14:41:08 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "inclusions.h"

void	gerer_fichier(char *fichier)
{
	char	buf[BUF_SIZE];
	int		ret;
	int		fd;

	fd = open(fichier, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_err("Fichier invalide.\n");
		return ;
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac == 1)
			ft_putstr_err("File name missing.\n");
		if (ac > 2)
			ft_putstr_err("Too many arguments.\n");
	}
	else
		gerer_fichier(av[1]);
	return (0);
}
