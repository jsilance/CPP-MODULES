/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 23:42:48 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/29 19:27:35 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Dog.hpp"
#include "./class/Cat.hpp"

int main()
{
	// const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << std::endl;

	// std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();

	std::cout << std::endl;
	
	// delete meta;
	delete j;
	delete i;

	return (0);
}
