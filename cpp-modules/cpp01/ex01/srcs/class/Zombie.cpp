/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:06:41 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/20 18:19:18 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : name("")
{
	std::cout << "New zombie created: " << this->name << std::endl;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie destroyed: " << this->name << std::endl;
	return;
}

void Zombie::annonce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName(std::string name)
{
	this->name = name;
}

std::string Zombie::getZombieName(void)
{
	return (this->name);
}
