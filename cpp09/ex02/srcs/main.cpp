/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:30:53 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/25 22:00:12 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		std::cout << "Error\n";
		return (1);
	}

	PmergeMe dumbers;

	int j = 0;
	int nb = 0;
	for (int i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!std::isdigit(argv[i][j++]))
			{
				std::cout << "Error\n";
				return (1);
			}
		}
		nb = std::atoi(argv[i]);
		dumbers.addNbr(nb);
	}
	dumbers.mergeInsertSort();
	dumbers.sorterVerifier();
	return (0);
}