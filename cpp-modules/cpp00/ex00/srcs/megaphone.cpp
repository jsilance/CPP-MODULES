/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:08:27 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/14 19:37:50 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	ft_strlen(char *str)
{
	int	i;

	for(i = 0; str && str[i]; i++);
	return (i);
}

char	ft_toupper(char c)
{
	return ((c >= 'a' && c <= 'z') ? c - 32 : c);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
		for (int j = 0; j < ft_strlen(av[i]); j++)
			std::cout << ft_toupper(av[i][j]);
	std::cout << std::endl;
	return (0);
}
