/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:09:42 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/16 19:32:29 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Zombie.hpp"

int main(void)
{
	Zombie *zomb1;
	Zombie *zomb2;

	zomb1 = newZombie("mr Georges");
	zomb2 = newZombie("Operator");

	std::cout << std::endl;

	randomChump("Bob");

	std::cout << std::endl;

	randomChump("Blooper");

	std::cout << std::endl;

	zomb1->annonce();
	zomb2->annonce();

	std::cout << std::endl;
	
	delete zomb1;
	delete zomb2;
	return (0);
}
