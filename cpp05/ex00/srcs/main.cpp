/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:57:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/01 15:20:57 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Bureaucrat.hpp"

int main()
{
	Bureaucrat *skabada = new Bureaucrat("Malvin", 149);
	Bureaucrat *skibidi = new Bureaucrat("Bob", 2);
	
	try
	{
		std::cout << *skibidi;
		skibidi->incrementGrade();
		std::cout << *skibidi;
		skibidi->incrementGrade();
		std::cout << *skibidi;
		skibidi->decrementGrade();
		std::cout << *skibidi;

		std::cout << std::endl;

		std::cout << *skabada;
		skabada->decrementGrade();
		std::cout << *skabada;
		skabada->decrementGrade();
		std::cout << *skabada;
		skabada->incrementGrade();
		std::cout << *skabada;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	delete skibidi;
	delete skabada;
	
	std::cout << std::endl << std::endl << std::endl;

	try
	{
		Bureaucrat *skobodo = new Bureaucrat("Nigel", 19);
		std::cout << *skobodo;
		skobodo->incrementGrade();
		std::cout << *skobodo;
		skobodo->incrementGrade();
		std::cout << *skobodo;
		skobodo->decrementGrade();
		std::cout << *skobodo;

		std::cout << std::endl;

		Bureaucrat *skebede = new Bureaucrat("Tuptup", -2);
		std::cout << *skebede;
		skebede->decrementGrade();
		std::cout << *skebede;
		skebede->decrementGrade();
		std::cout << *skebede;
		skebede->incrementGrade();
		std::cout << *skebede;
		delete skobodo;
		delete skebede;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	// system("leaks Bureaucrat");
	return (0);
}
