/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:47:22 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/15 11:14:15 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Default"), _signed(0), _gradeToSign(150), _gradeToExe(150)
{
}

Form::Form(std::string name, int gToSign, int gToExe): _name(name), _signed(0), _gradeToSign(gToSign), _gradeToExe(gToExe)
{
	if (gToSign < 1 || gToExe < 1)
		throw Form::GradeTooHighException();
	else if (gToSign > 150 || gToExe > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExe() const
{
	return (this->_gradeToExe);
}

void Form::setSigned(bool val)
{
	this->_signed = val;
}

void Form::setGradeToSign(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	this->_gradeToSign = grade;
}

void Form::setGradeToExe(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	this->_gradeToExe = grade;
}

void Form::beSigned(Bureaucrat user)
{
	if (user.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	this->setSigned(1);
}

Form::GradeTooLowException::GradeTooLowException() throw()
{
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

Form::GradeTooHighException::GradeTooHighException() throw()
{
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("\x1b[31mGrade too low!\x1b[0m");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("\x1b[31mGrade too high!\x1b[0m");
}

std::ostream& operator<<(std::ostream& o, Form const& rhs)
{
	o << "Name: " << rhs.getName() << std::endl;
	o << "Is signed: " << rhs.getSigned() << std::endl;
	o << "Level to sign: " << rhs.getGradeToSign() << std::endl;
	o << "Level to execute: " << rhs.getGradeToExe() << std::endl;
	return (o);
}
