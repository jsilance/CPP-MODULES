/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:57:57 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/06 18:11:21 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <algorithm>

template <typename T>

class MutantStack: public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>() {}
		MutantStack(const MutantStack<T> &src): std::stack<T>(src) {}
		~MutantStack() {}

		MutantStack	&operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		}
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (std::stack<T>::c.begin());
		}
		iterator end()
		{
			return (std::stack<T>::c.end());
		}
};

#endif
