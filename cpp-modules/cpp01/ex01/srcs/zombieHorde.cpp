/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:45:59 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/16 18:36:06 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *zombieHorde = new Zombie[n];

	for (int i = 0; i < n; i++)
		zombieHorde[i].setZombieName(name);
	return (zombieHorde);
}
