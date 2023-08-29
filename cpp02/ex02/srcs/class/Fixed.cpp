/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:25:52 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/02 16:30:16 by jusilanc         ###   ########.fr       */
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
	if (this != &nb)
		this->_val = nb.getRawBits();
	return (*this);
}


Fixed Fixed::operator+(Fixed const &nb) const
{

	Fixed newFixed;
	
	newFixed.setRawBits(this->getRawBits() + nb.getRawBits());
	return (newFixed);
}

Fixed Fixed::operator-(Fixed const &nb) const
{
	Fixed newFixed;
	
	newFixed.setRawBits(this->getRawBits() - nb.getRawBits());

	return (newFixed);
}

Fixed Fixed::operator/(Fixed const &nb) const
{
	if (nb.toFloat() == 0)
		std::cout << "Error divide by 0\n";
	Fixed newFixed((nb.toFloat() != 0) ? this->toFloat() / nb.toFloat() : 0);

	return (newFixed);
}

Fixed Fixed::operator*(Fixed const &nb) const
{
	Fixed newFixed(this->toFloat() * nb.toFloat());

	return (newFixed);
}


bool Fixed::operator>(Fixed const &nb) const
{
	return (this->getRawBits() > nb.getRawBits());
}

bool Fixed::operator<(Fixed const &nb) const
{
	return (this->getRawBits() < nb.getRawBits());
}

bool Fixed::operator>=(Fixed const &nb) const
{
	return (this->getRawBits() >= nb.getRawBits());
}

bool Fixed::operator<=(Fixed const &nb) const
{
	return (this->getRawBits() <= nb.getRawBits());
}

bool Fixed::operator==(Fixed const &nb) const
{
	return (this->getRawBits() == nb.getRawBits());
}

bool Fixed::operator!=(Fixed const &nb) const
{
	return (this->getRawBits() != nb.getRawBits());
}


const Fixed &Fixed::min(const Fixed &rlv, const Fixed &rrv)
{
	return ((rlv < rrv) ? rlv : rrv);
}

const Fixed &Fixed::max(const Fixed &rlv, const Fixed &rrv)
{
	return ((rlv > rrv) ? rlv : rrv);
}

Fixed &Fixed::min(Fixed &rlv, Fixed &rrv)
{
	return ((rlv < rrv) ? rlv : rrv);
}

Fixed &Fixed::max(Fixed &rlv, Fixed &rrv)
{
	return ((rlv > rrv) ? rlv : rrv);
}


Fixed Fixed::operator++(int)
{
	Fixed newFixed(*this);

	++(*this);
	return (newFixed);
}

Fixed &Fixed::operator++(void)
{
	this->_val = this->_val + 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed newFixed(*this);

	--(*this);
	return (newFixed);
}

Fixed &Fixed::operator--(void)
{
		this->_val = this->_val - 1;
	return (*this);
}


int Fixed::getRawBits(void) const
{
	return (this->_val);
}

void Fixed::setRawBits(int const raw)
{
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
