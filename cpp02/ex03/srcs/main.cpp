/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 08:28:54 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/18 14:32:46 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./class/Point.hpp"

int main( void )
{
	Point a(-8.26f, -3.33f);
	Point b(-2.3f, 4.19f);
	Point c(1.08f, -0.77f);

	Point p(-9.44f, 5.25f); //is out of the triangle
	// Point p(-3.46f, 0.97f); //is in the triangle

	if (bsp(a, b, c, p))
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;
	return (0);
}
