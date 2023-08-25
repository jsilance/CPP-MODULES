/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:47:12 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/25 23:49:48 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	this->_brain = new Brain("Je suis le cerveau du chien!");
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	this->_brain = new Brain(*src._brain);
	this->_type = src._type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*rhs._brain);
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

std::string	Dog::getType() const
{
	return (this->_type);
}

Brain	*Dog::getBrain() const
{
	return (this->_brain);
}
