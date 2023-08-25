/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:56:10 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/25 13:47:11 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("Default", 100, 100, 30)
{
	std::cout << "FragTrap default constructor called: " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called: " << this->_name << std::endl;
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

void FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is already dead and can't do that!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is out of energy!" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is already dead!" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is already dead and can't do that!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is out of energy!" << std::endl;
	else
	{	
		std::cout << "FragTrap " << this->_name << " is repaired for " << amount << " points of damage!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
}

void		FragTrap::highFivesGuys(void)
{
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is dead and can't do that!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " is out of energy!" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_name << " is asking for high fives" << std::endl;
		this->_energyPoints -= 1;
	}
}
