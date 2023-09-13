/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:08:14 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/13 23:38:42 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern &	Intern::operator=(Intern const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

AForm *		Intern::makeForm(std::string const & formName, std::string const & target) const
{
	AForm *		(Intern::*formMaker[3])(std::string const & target) const = {
		&Intern::_makeShrubberyCreationForm,
		&Intern::_makeRobotomyRequestForm,
		&Intern::_makePresidentialPardonForm
	};
	std::string	typesForm[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == typesForm[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*formMaker[i])(target));
		}
	}
	std::cout << "Intern can't create " << formName << " because it doesn't exist" << std::endl;
	return (NULL);
}

AForm *		Intern::_makeShrubberyCreationForm(std::string const & target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm *		Intern::_makeRobotomyRequestForm(std::string const & target) const
{
	return (new RobotomyRequestForm(target));
}

AForm *		Intern::_makePresidentialPardonForm(std::string const & target) const
{
	return (new PresidentialPardonForm(target));
}
