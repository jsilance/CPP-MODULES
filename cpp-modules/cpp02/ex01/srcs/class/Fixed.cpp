/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:25:52 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/29 12:16:53 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _val(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nb)
{
	this->_val = nb << this->_bits;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const nb)
{
	int power = 1;

	std::cout << "Float constructor called" << std::endl;
	for (int i = 0; i < this->_bits; i++)
		power *= 2;
	this->_val = nb * power;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(Fixed const &nb)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &nb)
		this->_val = nb.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_val);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
	return ;
}

int Fixed::toInt(void) const
{
	return (this->_val >> this->_bits);
}

float Fixed::toFloat(void) const
{
	int power = 1;

	for (int i = 0; i < this->_bits; i++)
		power *= 2;
	return ((float)this->_val / power);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}
