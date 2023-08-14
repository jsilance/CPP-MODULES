/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 23:42:48 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/11 01:29:54 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./class/Dog.hpp"
#include "./class/Cat.hpp"
#include "./class/WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	return (0);
}
