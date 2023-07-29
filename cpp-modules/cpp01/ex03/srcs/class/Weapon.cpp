/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:33:06 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/29 08:58:51 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): _type(weapon)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string& Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(const std::string& newType)
{
	this->_type = newType;
}
