/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:57:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/12 20:41:38 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Bureaucrat.hpp"
#include "./class/AForm.hpp"
#include "./class/ShrubberyCreationForm.hpp"
#include "./class/RobotomyRequestForm.hpp"
#include "./class/PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm shrubbery("home");
	// RobotomyRequestForm	robotomy("Bender");
	// PresidentialPardonForm	pardon("Zaphod");

	Bureaucrat				*hermes = new Bureaucrat("Hermes Conrad", 37);
	Bureaucrat				*bender = new Bureaucrat("Bender", 5);
	Bureaucrat				*zaphod = new Bureaucrat("Zaphod Beeblebrox", 1);

	std::cout << *hermes << std::endl;
	std::cout << *bender << std::endl;
	std::cout << *zaphod << std::endl;

	std::cout << shrubbery << std::endl;
	// std::cout << *robotomy << std::endl;
	// std::cout << *pardon << std::endl;

	hermes->signForm(shrubbery);
	// hermes->signForm(*robotomy);
	// hermes->signForm(*pardon);

	bender->signForm(shrubbery);
	// bender->signForm(*robotomy);
	// bender->signForm(*pardon);

	zaphod->signForm(shrubbery);
	// zaphod->signForm(*robotomy);
	// zaphod->signForm(*pardon);

	hermes->executeForm(shrubbery); // Problem from here <-------->
	// hermes->executeForm(*robotomy);
	// hermes->executeForm(*pardon);

	bender->executeForm(shrubbery);
	// bender->executeForm(*robotomy);
	// bender->executeForm(*pardon);

	zaphod->executeForm(shrubbery);
	// zaphod->executeForm(*robotomy);
	// zaphod->executeForm(*pardon);

	delete hermes;
	delete bender;
	delete zaphod;

	return (0);
}
