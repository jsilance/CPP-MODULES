/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:57:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/13 23:54:48 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Bureaucrat.hpp"
#include "./class/AForm.hpp"
#include "./class/ShrubberyCreationForm.hpp"
#include "./class/RobotomyRequestForm.hpp"
#include "./class/PresidentialPardonForm.hpp"
#include "./class/Intern.hpp"

int main()
{
	Bureaucrat				*hermes = new Bureaucrat("Hermes Conrad", 37);
	Bureaucrat				*bender = new Bureaucrat("Bender", 5);
	Bureaucrat				*zaphod = new Bureaucrat("Kappa Boy", 14);

	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Taiga");
		hermes->signForm(*rrf);
		hermes->executeForm(*rrf);
		delete rrf;
	}
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Amazonia");
		bender->signForm(*rrf);
		bender->executeForm(*rrf);
		delete rrf;
	}
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Soignes");
		zaphod->signForm(*rrf);
		zaphod->executeForm(*rrf);
		delete rrf;
	}
	
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		hermes->signForm(*rrf);
		hermes->executeForm(*rrf);
		delete rrf;
	}
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "R2D2");
		bender->signForm(*rrf);
		bender->executeForm(*rrf);
		delete rrf;
	}
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Terminator");
		zaphod->signForm(*rrf);
		zaphod->executeForm(*rrf);
		delete rrf;
	}
	
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Julian");
		hermes->signForm(*rrf);
		hermes->executeForm(*rrf);
		delete rrf;
	}
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Archibald");
		bender->signForm(*rrf);
		bender->executeForm(*rrf);
		delete rrf;
	}
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Tommy");
		zaphod->signForm(*rrf);
		zaphod->executeForm(*rrf);
		delete rrf;
	}

	delete hermes;
	delete bender;
	delete zaphod;

	return (0);
}
