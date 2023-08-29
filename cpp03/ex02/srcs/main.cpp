/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:33:24 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/01 20:06:56 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/ScavTrap.hpp"
#include "./class/FragTrap.hpp"

int main(void)
{
	ClapTrap	claptrap("Bob");
	ScavTrap	scavtrap("Nigel");
	FragTrap	fragtrap("David");

	std::cout << std::endl << "ClapTrap:" << std::endl << std::endl;

	claptrap.attack("Kevin");
	claptrap.takeDamage(2);
	claptrap.beRepaired(1);

	std::cout << std::endl << "ScavTrap:" << std::endl << std::endl;

	scavtrap.attack("Kevin");
	scavtrap.takeDamage(2);
	scavtrap.beRepaired(1);
	scavtrap.guardGate();

	std::cout << std::endl << "FragTrap:" << std::endl << std::endl;

	fragtrap.attack("Kevin");
	fragtrap.takeDamage(2);
	fragtrap.beRepaired(1);
	fragtrap.highFivesGuys();

	std::cout << std::endl;
	return (0);
}
