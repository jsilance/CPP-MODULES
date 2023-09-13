/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:57:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/13 14:00:53 by jusilanc         ###   ########.fr       */
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
	ShrubberyCreationForm shrubberyy("White House");
	RobotomyRequestForm	robotomy("Mockey");
	PresidentialPardonForm	pardon("Zaphod");

	Bureaucrat				*hermes = new Bureaucrat("Hermes Conrad", 37);
	Bureaucrat				*bender = new Bureaucrat("Bender", 5);
	Bureaucrat				*zaphod = new Bureaucrat("Kappa Boy", 14);

	std::cout << *hermes << std::endl;
	std::cout << *bender << std::endl;
	std::cout << *zaphod << std::endl;

	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << pardon << std::endl;

	std::cout << std::endl << "***shrubbery sign***" << std::endl << std::endl;

	hermes->signForm(shrubbery);
	bender->signForm(shrubbery);
	zaphod->signForm(shrubberyy);
	
	std::cout << std::endl << "***shrubbery execute***" << std::endl << std::endl;

	hermes->executeForm(shrubbery);
	bender->executeForm(shrubbery);
	zaphod->executeForm(shrubberyy);

	std::cout << std::endl << "***robotomy sign***" << std::endl << std::endl;

	hermes->signForm(robotomy);
	bender->signForm(robotomy);
	zaphod->signForm(robotomy);

	std::cout << std::endl << "***robotomy execute***" << std::endl << std::endl;

	hermes->executeForm(robotomy);
	bender->executeForm(robotomy);
	zaphod->executeForm(robotomy);

	std::cout << std::endl << "***pardon sign***" << std::endl << std::endl;

	hermes->signForm(pardon);
	bender->signForm(pardon);
	zaphod->signForm(pardon);

	std::cout << std::endl << "***pardon execute***" << std::endl << std::endl;

	hermes->executeForm(pardon);
	bender->executeForm(pardon);
	zaphod->executeForm(pardon);

	delete hermes;
	delete bender;
	delete zaphod;

	return (0);
}
