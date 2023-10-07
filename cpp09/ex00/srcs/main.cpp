/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:38:41 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/07 11:39:52 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange	data;

	if (ac != 2)
	{
		std::cout << "Wrong amount of arguments, provide only the file to examinate" << std::endl;
		return (1);
	}
	data.readFile(av[1]);
	return (0);
}