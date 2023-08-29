/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:12:31 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/20 18:20:38 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Zombie.hpp"

void annonceAllZomb(int nZombies, Zombie *zombieHorde)
{
	for (int i = 0; i < nZombies; i++)
		zombieHorde[i].annonce();
}

int main(void)
{
	int horde_a = 10;
	int horde_b = 3;

	Zombie *zombieHorde1 = zombieHorde(horde_a, "Bob");
	Zombie *zombieHorde2 = zombieHorde(horde_b, "Jason");

	annonceAllZomb(horde_a, zombieHorde1);
	annonceAllZomb(horde_b, zombieHorde2);

	delete [] zombieHorde1;
	delete [] zombieHorde2;
	return (0);
}
