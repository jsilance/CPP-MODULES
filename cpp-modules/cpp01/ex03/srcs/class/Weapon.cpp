/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:33:06 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/21 15:14:37 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): type(weapon)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string& Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(const std::string& newType)
{
	this->type = newType;
}
