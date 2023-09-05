/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:47:22 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/05 17:03:12 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("Default"), _signed(0), _gradeToSign(150), _gradeToExe(150)
{
}

AForm::AForm(std::string name, std::string target, int gToSign, int gToExe): _name(name), _signed(0), _gradeToSign(gToSign), _gradeToExe(gToExe)
{
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}

int AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExe() const
{
	return (this->_gradeToExe);
}

void AForm::setSigned(bool val)
{
	this->_signed = val;
}

void AForm::setGradeToSign(int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	else if (grade > 150)
		throw AForm::GradeTooLowException();
	this->_gradeToSign = grade;
}

void AForm::setGradeToExe(int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	else if (grade > 150)
		throw AForm::GradeTooLowException();
	this->_gradeToExe = grade;
}

void AForm::beSigned(Bureaucrat user)
{
	if (user.getGrade() > this->getGradeToSign())
		throw AForm::GradeTooLowException();
	this->setSigned(1);
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeToExe())
		throw AForm::GradeTooLowException();
}

AForm::GradeTooLowException::GradeTooLowException() throw()
{
}

AForm::GradeTooLowException::~GradeTooLowException() throw()
{
}

AForm::GradeTooHighException::GradeTooHighException() throw()
{
}

AForm::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("\x1b[31mGrade too low!\x1b[0m");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("\x1b[31mGrade too high!\x1b[0m");
}

const char* AForm::NotSignedException::what() const throw()
{
	return ("\x1b[31mForm not signed!\x1b[0m");
}

std::ostream& operator<<(std::ostream& o, AForm const& rhs)
{
	o << "Name: " << rhs.getName() << std::endl;
	o << "Is signed: " << rhs.getSigned() << std::endl;
	o << "Level to sign: " << rhs.getGradeToSign() << std::endl;
	o << "Level to execute: " << rhs.getGradeToExe() << std::endl;
	return (o);
}
