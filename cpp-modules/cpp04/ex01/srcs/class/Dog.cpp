/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:47:12 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/11 01:20:32 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	this->_brain = new Brain();
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
	return ;
}

std::string	Dog::getType() const
{
	return (this->_type);
}
