/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:38:41 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/20 02:18:53 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#include "class/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange	data;

	if (ac != 2 || access(av[1], F_OK) == -1)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	data.readFile("data.csv", av[1]);
	return (0);
}