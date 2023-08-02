/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:56:10 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/01 20:10:00 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "FragTrap default constructor called: " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called: " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	std::cout << "FragTrap copy constructor called: " << this->_name << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called: " << this->_name << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is asking for high fives" << std::endl;
}
