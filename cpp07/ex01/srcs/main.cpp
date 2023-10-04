/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:04:14 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/02 23:42:52 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "templates/iter.hpp"

int main()
{
	char str[] = "Bonjour les amis";
	int a[] = {1,2,3,4,5,6,7,8,9};
	std::string myString[] = {"Hello", "world", "and", "computers"};

	std::cout << "char []\n";
	iter(str, 16, printValue);
	std::cout << "\n";
	
	std::cout << "int []\n";
	iter(a, 9, printValue);
	std::cout << "\n";

	std::cout << "string []\n";
	iter(myString, 4, printValue);
	std::cout << "\n";

	return (0);
}