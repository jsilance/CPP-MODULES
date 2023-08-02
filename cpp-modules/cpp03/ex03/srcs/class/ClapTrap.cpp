/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:25:24 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/02 16:02:02 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "ClapTrap " << this->_name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &copy)
{
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead and can't do that!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
		this->_energyPoints -= 1;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead and can't do that!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	else
	{	
		std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points of damage!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
}
