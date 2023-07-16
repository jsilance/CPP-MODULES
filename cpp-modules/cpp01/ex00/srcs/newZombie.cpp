/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:25:05 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/16 19:23:02 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *newZomb = new Zombie(name);
	return (newZomb);
}
