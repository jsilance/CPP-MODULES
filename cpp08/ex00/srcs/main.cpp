/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:08:24 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/05 18:18:40 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <iostream>
#include "templates/easyfind.hpp"

int main()
{
	std::list<int> lst;
	
	lst.push_back(125);
	lst.push_back(25);
	lst.push_back(37);
	lst.push_back(19);
	lst.push_back(41);
	lst.push_back(103);
	lst.push_back(104);
	lst.push_back(105);
	try
	{
		std::list<int>::const_iterator it = easyfind(lst, 197);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}
	return (0);
}
