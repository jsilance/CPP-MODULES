/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:33:24 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/01 20:06:04 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/ScavTrap.hpp"

int main(void)
{
	ClapTrap	claptrap("Bob");
	ScavTrap	scavtrap("Nigel");

	std::cout << std::endl << "ClapTrap:" << std::endl << std::endl;

	claptrap.attack("Kevin");
	claptrap.takeDamage(2);
	claptrap.beRepaired(1);

	std::cout << std::endl << "ScavTrap:" << std::endl << std::endl;

	scavtrap.attack("Kevin");
	scavtrap.takeDamage(2);
	scavtrap.beRepaired(1);
	scavtrap.guardGate();
	std::cout << std::endl;
	return (0);
}
