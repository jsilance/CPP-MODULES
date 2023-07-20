/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:20:13 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/20 19:29:17 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string myString = "HI THIS IS BRAIN";
	std::string *stringPTR = &myString;
	std::string &stringREF = myString;

	std::cout << &myString << std::endl;
	std::cout << &(*stringPTR) << std::endl;
	std::cout << &stringREF << std::endl << std::endl;
	
	std::cout << myString << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return (0);
}
