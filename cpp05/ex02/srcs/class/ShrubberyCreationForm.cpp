/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:13:19 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/13 13:23:12 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
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
	if (this != &src)
		AForm::operator=(src);
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream fs;

	// std::cout << "ShrubberyCreationForm::execute " << this->getTarget() + "_shruberry" << std::endl;
	if (!this->getSigned())
		throw AForm::NotSignedException();
	if (executor.getGrade() > this->getGradeToExe())
		throw AForm::GradeTooLowException();
	fs.exceptions(std::ifstream::failbit | std::ifstream::badbit);
	fs.open(this->getTarget() + "_shruberry", std::fstream::out | std::fstream::trunc);
	if (!fs.good())
		std::cerr << "Error when opening " << this->getTarget() << "_shruberry\n";

	fs << "       _-_\n";
	fs << "    /~~   ~~\\\n";
	fs << " /~~         ~~\\\n";
	fs << "{               }\n";
	fs << " \\  _-     -_  /\n";
	fs << "   ~  \\\\ //  ~\n";
	fs << "       | |\n";
	fs << "       | |\n";
	fs << "_______/ \\_______\n";

	fs.close();
}