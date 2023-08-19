/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:45:25 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/19 19:56:45 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type): _type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}

void	AAnimal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
	return ;
}
