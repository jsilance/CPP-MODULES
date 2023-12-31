/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:43:06 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/02 22:34:54 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T> void swap(T& val1, T& val2)
{
	T tmp;

	tmp = val2;
	val2 = val1;
	val1 = tmp;
}

template<typename T> T min(const T& val1, const T& val2)
{
	return ((val1 < val2) ? val1 : val2);
}

template<typename T> T max(const T& val1, const T& val2)
{
	return ((val1 > val2) ? val1 : val2);
}

#endif
