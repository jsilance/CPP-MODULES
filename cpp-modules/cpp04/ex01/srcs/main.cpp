/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 23:42:48 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/26 00:01:31 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Dog.hpp"
#include "./class/Cat.hpp"

int main()
{
	int nbOfAnimals = 10;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	
	j->makeSound();
	i->makeSound();

	std::cout << std::endl;

	delete j;
	delete i;

	std::cout << std::endl << std::endl;

	Animal **animals = new Animal*[nbOfAnimals];

	for (int i = 0; i < nbOfAnimals; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < nbOfAnimals; i++)
	{
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < nbOfAnimals; i++)
	{
		delete animals[i];
	}

	delete [] animals;

	return (0);
}
