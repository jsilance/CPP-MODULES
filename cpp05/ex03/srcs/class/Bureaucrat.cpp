/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:34:02 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/12 20:04:17 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name): _name(name), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_grade = rhs._grade;
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	try
	{
		std::cout << "\nTryign to increment...\n";
		if (this->getGrade() <= 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade--;
		std::cout << "\033[0;32mIncrement success!\x1b[0m\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "\x1b[31mIncrement failed!\n";
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		std::cout << "\nTryign to decrement...\n";
		if (this->getGrade() >= 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade++;
		std::cout << "\033[0;32mDecrement success!\x1b[0m\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "\x1b[31mDecrement failed!\n";
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(AForm & form)
{
	try
	{
		form.beSign(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\x1b[31mGrade too low!\x1b[0m");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\x1b[31mGrade too high!\x1b[0m");
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}
