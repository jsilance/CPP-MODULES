/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:13:19 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/05 09:54:30 by jusilanc         ###   ########.fr       */
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

void ShrubberyCreationForm::executeConcrete() const
{
	std::ofstream fs;

	fs.open(this->getTarget() + "_shruberry", std::fstream::out | std::fstream::trunc);
	if (!fs.good())
		std::cerr << "Error when opening " << this->getTarget() << "_shruberry\n";
	fs << "";

	fs.close();
}