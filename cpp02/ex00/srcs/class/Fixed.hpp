/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:24:41 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/29 10:19:13 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int nb);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &operator=(Fixed const &nb);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		
	private:
		int	_val;
		int const static _bits = 8;
};

#endif