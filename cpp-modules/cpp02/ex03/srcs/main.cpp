/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 08:28:54 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/30 18:59:36 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./class/Point.hpp"

int main( void )
{
	Point a(0, 0);
	Point b(4, 0);
	Point c(4, 4);

	Point p(1, 2.5f);

	if (bsp(a, b, c, p))
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	return (0);
}
