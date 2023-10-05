/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:50:21 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/05 19:59:16 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

class notFoundVal: public std::exception
{
	const char *what() const throw()
	{
		return ("Value not found");
	}
};

template<typename T> typename T::const_iterator easyfind(T data, int val)
{
	typename T::const_iterator it = find(data.begin(), data.end(), val);
	if (*it != val)
		throw (notFoundVal());
	return (it);
}

#endif
