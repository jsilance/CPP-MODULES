/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:42:33 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/02 16:35:33 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/DiamondTrap.hpp"
#include "./class/ScavTrap.hpp"
#include "./class/FragTrap.hpp"
#include "./class/ClapTrap.hpp"

int main()
{
	DiamondTrap		*clap = new DiamondTrap("Clap");
	DiamondTrap		*clap2 = new DiamondTrap(*clap);
	DiamondTrap		*clap3 = new DiamondTrap();

	clap->attack("Clap2");
	clap->takeDamage(10);
	clap->beRepaired(10);
	clap->whoAmI();
	clap->highFivesGuys();
	clap->guardGate();
	std::cout << std::endl;

	clap2->attack("Clap3");
	clap2->takeDamage(10);
	clap2->beRepaired(10);
	clap2->whoAmI();
	clap2->highFivesGuys();
	clap2->guardGate();
	std::cout << std::endl;

	clap3->attack("Clap");
	clap3->takeDamage(10);
	clap3->beRepaired(10);
	clap3->whoAmI();
	clap3->highFivesGuys();
	clap3->guardGate();
	std::cout << std::endl;

	delete clap;
	delete clap2;
	delete clap3;
	return (0);
}