/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:06:41 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/16 19:10:32 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Default")
{
	std::cout << "New zombie created: " << this->_name << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie destroyed: " << this->_name << std::endl;
	return;
}

void Zombie::annonce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName(std::string name)
{
	std::string oldName = this->_name;
	this->_name = name;
	std::cout << "Zombie " << oldName << " renamed to " << this->_name << std::endl;
}

std::string Zombie::getZombieName(void)
{
	return (this->_name);
}
