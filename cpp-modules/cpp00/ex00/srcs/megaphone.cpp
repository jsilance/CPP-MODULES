/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:08:27 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/26 19:05:25 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string str;
	
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		str = std::string(av[i]);
		for (int j = 0; j < str.size(); j++)
			std::cout << (char)toupper(str[j]);
	}
	std::cout << std::endl;
	return (0);
}
