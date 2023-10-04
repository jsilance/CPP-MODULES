/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 22:35:11 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/02 23:41:39 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib>

template<typename T, typename U> void iter(T *tab, size_t size, void f(U &))
{
	for(size_t i = 0; i < size; i++)
		f(tab[i]);
}

template<typename T> void printValue(T &data)
{
	std::cout << data << std::endl;
}

#endif
