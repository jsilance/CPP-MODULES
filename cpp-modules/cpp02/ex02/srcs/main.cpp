/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 08:28:54 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/30 15:59:45 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./class/Fixed.hpp"

int main( void ) {
	Fixed a(0.5f);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << std::endl;
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << b * 0.5f << std::endl;
	std::cout << b / 3 << std::endl;
	std::cout << b + 1 << std::endl;
	std::cout << b - 1 << std::endl;

	std::cout << std::endl;
	
	(a <= b) ? std::cout << "YES\n" : std::cout << "NO\n";
	(a < b) ? std::cout << "YES\n" : std::cout << "NO\n";
	(a >= b) ? std::cout << "YES\n" : std::cout << "NO\n";
	(a > b) ? std::cout << "YES\n" : std::cout << "NO\n";
	(a == b) ? std::cout << "YES\n" : std::cout << "NO\n";
	(a != b) ? std::cout << "YES\n" : std::cout << "NO\n";
	
	std::cout << std::endl;

	std::cout << Fixed::min( a, 3.5f ) << std::endl;
	std::cout << Fixed::max( 30.5f, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( 30.5f, 3.5f ) << std::endl;
	std::cout << Fixed::min( 30.5f, 3.5f ) << std::endl;
	return (0);
}
