/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 13:56:23 by athomas           #+#    #+#             */
/*   Updated: 2016/07/13 09:26:20 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*nom;

	j = 1;
	while (j < argc)
	{
		i = 0;
		nom = argv[j];
		while (nom[i])
		{
			ft_putchar(nom[i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
