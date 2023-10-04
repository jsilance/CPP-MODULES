/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 01:24:55 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/04 16:23:52 by jusilanc         ###   ########.fr       */
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
	
	try
	{
		Array<std::string> words(6);
		words[0] = "Hello world";
		words[1] = "Everything is fine";
		words[2] = "Can I have a HOO YEAH!?";
		words[3] = "I'm pickle Rick";
		words[4] = "Tu sais pas qui je suis";
		words[5] = "J'ai des connaissance en chimie...";

		for (int i = 0; i < words.size(); i++)
			std::cout << words[i] << "\n";
		std::cout << std::endl << "Array size: " << words.size() << std::endl;
		words[6] = "I'm a out of range operation lel";
		std::cout << "Test of Out of Range...\n" << words[words.size() + 3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
	return (0);
}
