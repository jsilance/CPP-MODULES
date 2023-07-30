/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:26:56 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/30 18:55:13 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point: public Fixed
{
	public:
		Point();
		Point(Fixed x, Fixed y);
		Point(Point const &src);
		~Point();

		Fixed getX(void) const;
		Fixed getY(void) const;

		Point &operator=(Point const &src);

	private:
		Fixed x;
		Fixed y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
