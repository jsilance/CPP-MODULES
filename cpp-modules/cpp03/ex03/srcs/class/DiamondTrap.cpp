/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:53:17 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/25 16:14:38 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "Default";
	this->FragTrap::_hitPoints = FragTrap::_hitPoints;
	this->ScavTrap::_energyPoints = ScavTrap::_energyPoints;
	this->FragTrap::_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->_name = name;
	this->FragTrap::_hitPoints = FragTrap::_hitPoints;
	this->ScavTrap::_energyPoints = ScavTrap::_energyPoints;
	this->FragTrap::_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->FragTrap::_hitPoints = rhs.FragTrap::_hitPoints;
		this->ScavTrap::_energyPoints = rhs.ScavTrap::_energyPoints;
		this->FragTrap::_attackDamage = rhs.FragTrap::_attackDamage;
	}
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	if (this->FragTrap::_hitPoints <= 0)
		std::cout << "DiamondTrap " << this->_name << " is already dead and can't do that!" << std::endl;
	else if (this->ScavTrap::_energyPoints <= 0)
		std::cout << "DiamondTrap " << this->_name << " is out of energy!" << std::endl;
	else
	{
		std::cout << "DiamondTrap " << this->_name << " attacks " << target << ", causing " << this->FragTrap::_attackDamage << " points of damage!" << std::endl;
		this->ScavTrap::_energyPoints -= 1;
	}
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (this->FragTrap::_hitPoints <= 0)
		std::cout << "DiamondTrap " << this->_name << " is already dead!" << std::endl;
	else
	{
		std::cout << "DiamondTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->FragTrap::_hitPoints -= amount;
	}
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	if (this->FragTrap::_hitPoints <= 0)
		std::cout << "DiamondTrap " << this->_name << " is already dead and can't do that!" << std::endl;
	else if (this->ScavTrap::_energyPoints <= 0)
		std::cout << "DiamondTrap " << this->_name << " is out of energy!" << std::endl;
	else
	{	
		std::cout << "DiamondTrap " << this->_name << " is repaired for " << amount << " points of damage!" << std::endl;
		this->FragTrap::_hitPoints += amount;
		this->ScavTrap::_energyPoints -= 1;
	}
}

void			DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
}
