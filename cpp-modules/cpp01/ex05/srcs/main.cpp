/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:52:39 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/27 14:20:29 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./class/Harl.hpp"

int main(int ac, char **ag)
{
	Harl newHarl;
	std::cout << "Level: debug" << std::endl;
	newHarl.complain("debug");
	std::cout << std::endl;
	
	std::cout << "Level: info" << std::endl;
	newHarl.complain("info");
	std::cout << std::endl;

	std::cout << "Level: warning" << std::endl;
	newHarl.complain("warning");
	std::cout << std::endl;

	std::cout << "Level: error" << std::endl;
	newHarl.complain("error");

	return (0);
}
