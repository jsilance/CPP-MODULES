/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:57:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/01 18:54:12 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Bureaucrat.hpp"
#include "./class/AForm.hpp"

int main()
{
	try
	{
		Bureaucrat *skibidi = new Bureaucrat("Bob", 148);

		AForm *formulary = new AForm("roi", 147, 146);

		std::cout << *skibidi;
		std::cout << *formulary;

		std::cout << std::endl;

		skibidi->signForm(*formulary);

		std::cout << std::endl;

		std::cout << *formulary;

		delete formulary;
		delete skibidi;
	}
	catch(const std::exception & e)
	{
		std::cout << e.what() << std::endl;;
		return (1);
	}
	return (0);
}