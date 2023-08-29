/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:31:37 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/30 18:55:59 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(Fixed sx, Fixed sy): x(sx), y(sy)
{
	// std::cout << "Assignation constructor called" << std::endl;
}

Point::Point(Point const &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Point::~Point()
{
	// std::cout << "Default destructor called" << std::endl;
}

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}

Point &Point::operator=(Point const &src)
{
	this->x = src.x;
	this->y = src.y;
	return (*this);
}
