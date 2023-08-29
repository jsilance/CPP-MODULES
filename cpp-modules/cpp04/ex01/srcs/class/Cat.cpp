/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:46:03 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/25 23:51:21 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain("Je suis le cerveau du chat!");
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	this->_brain = new Brain(*src._brain);
	this->_type = src._type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

std::string	Cat::getType() const
{
	return (this->_type);
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);
}
