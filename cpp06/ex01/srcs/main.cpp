/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:58:40 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/30 19:12:48 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/Serializer.hpp"
#include <iostream>

int main()
{
	Data chips;
	Data *anotherChips;
	
	uintptr_t ptr;

	chips.nbr = 123456789;
	
	std::cout << "chips.nbr		= " << chips.nbr << std::endl;
	
	// ptr = chips; // impossible operation, they don't have the same type
	
	ptr = Serializer::serialize(&chips);
	std::cout << "ptr value		= " << ptr << std::endl << std::endl;

	anotherChips = Serializer::deserialize(ptr);

	std::cout << "chips.nbr		= " << chips.nbr << std::endl;
	std::cout << "anotherChips.nbr	= " << anotherChips->nbr << std::endl;
	return (0);	
}
