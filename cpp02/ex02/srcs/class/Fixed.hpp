/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:24:41 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/30 15:42:02 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const nb);
		Fixed(float const nb);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &operator=(Fixed const &nb);
		Fixed operator+(Fixed const &nb) const;
		Fixed operator-(Fixed const &nb) const;
		Fixed operator*(Fixed const &nb) const;
		Fixed operator/(Fixed const &nb) const;

		bool operator>(Fixed const &nb) const;
		bool operator<(Fixed const &nb) const;
		bool operator>=(Fixed const &nb) const;
		bool operator<=(Fixed const &nb) const;
		bool operator==(Fixed const &nb) const;
		bool operator!=(Fixed const &nb) const;

		static Fixed &min(Fixed &rlv, Fixed &rrv);
		static Fixed &max(Fixed &rlv, Fixed &rrv);
		static const Fixed &min(const Fixed &rlv, const Fixed &rrv);
		static const Fixed &max(const Fixed &rlv, const Fixed &rrv);

		Fixed operator++(int);
		Fixed &operator++(void);
		Fixed operator--(int);
		Fixed &operator--(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		void setRawBits(float const raw);
		float toFloat(void) const;
		int toInt(void) const;
		
	private:
		int	_val;
		int const static _bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif