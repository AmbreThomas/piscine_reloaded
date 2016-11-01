/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 14:13:23 by athomas           #+#    #+#             */
/*   Updated: 2016/07/13 12:42:09 by athomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_str_swap(char **tab, int i, int j)
{
	char *temp;

	temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}

char	**ft_str_sort(int n, char **tab)
{
	int flag;
	int i;
	int compteur;

	flag = 1;
	while (flag)
	{
		i = 0;
		compteur = 0;
		while (i < n - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				compteur += 1;
				ft_str_swap(tab, i, i + 1);
			}
			i++;
		}
		if (compteur == 0)
			flag = 0;
	}
	return (tab);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*nom;

	argv = ft_str_sort(argc, argv);
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
