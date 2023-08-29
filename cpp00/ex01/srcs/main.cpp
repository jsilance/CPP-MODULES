/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:21:30 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/16 15:22:00 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./class/PhoneBook.hpp"

int main(void)
{
	char		*command;
	PhoneBook	PhoneBook;

	while (1)
	{
		std::cout << "> ";
		std::cin >> command;
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		if (!std::strcmp(command, "ADD"))
			PhoneBook.addContact();
		else if (!std::strcmp(command, "SEARCH"))
			PhoneBook.searchContact();
		else if (!std::strcmp(command, "EXIT"))
			break;
		else
			std::cout << "Unknown command" << std::endl;
	}
	return (0);
}
