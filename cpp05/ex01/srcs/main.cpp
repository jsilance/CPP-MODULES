/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:57:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/03 14:51:24 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Bureaucrat.hpp"
#include "./class/Form.hpp"

int main()
{
	try
	{
		Bureaucrat *skibidi = new Bureaucrat("Bob", 145);

		Form *formulary = new Form("roi", 147, 146);

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
