/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:35:11 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/08 12:06:05 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib>

template<typename T> void iter(T *tab, size_t size, void f(const T &))
{
	for(size_t i = 0; i < size; i++)
		f(tab[i]);
}

template<typename T> void printValue(const T &data)
{
	std::cout << data << std::endl;
}

#endif
