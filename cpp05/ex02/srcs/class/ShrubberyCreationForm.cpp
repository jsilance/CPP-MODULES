/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:13:19 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/05 17:06:53 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{
	return (*this);
}

void ShrubberyCreationForm::execute() const
{
	std::ofstream fs;

	fs.open(this->getTarget() + "_shruberry", std::fstream::out | std::fstream::trunc);
	if (!fs.good())
		std::cerr << "Error when opening " << this->getTarget() << "_shruberry\n";
	fs << "       _-_\n";
	fs << "    /~~   ~~\\\n";
	fs << " /~~         ~~\\\n";
	fs << "{               }\n";
	fs << " \\  _-     -_  /\n";
	fs << "   ~  \\\\ //  ~\n";
	fs << "_- -   | | _- _\n";
	fs << "  _ -  | |   -_\n";

	fs.close();
}