/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:21:30 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/15 17:00:29 by jusilanc         ###   ########.fr       */
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