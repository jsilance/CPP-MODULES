/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 01:24:55 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/03 16:47:12 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates/Array.hpp"
#include <cstdlib>

int main()
{
	srand(time(NULL));
	try
	{
		Array<int> tabInt(90);
		for (int i = 0; i < tabInt.size(); i++)
			tabInt[i] = rand() % tabInt.size();
		for (int i = 0; i < tabInt.size(); i++)
			std::cout << tabInt[i] << " ";
		std::cout << std::endl << "Array size: " << tabInt.size() << std::endl;
		std::cout << "Test of Out of Range...\n" << tabInt[tabInt.size() + 3] << std::endl;


	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
