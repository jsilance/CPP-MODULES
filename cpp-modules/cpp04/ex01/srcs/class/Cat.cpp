/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:46:03 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/11 01:17:40 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	this->_brain = new Brain();
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		// this->_brain = new Brain();
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
	return ;
}

std::string	Cat::getType() const
{
	return (this->_type);
}
