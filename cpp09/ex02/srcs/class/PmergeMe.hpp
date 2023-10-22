/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:37:14 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/22 19:26:37 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <deque>
# include <vector>
# include <list>

class PmergeMe
{
	private:

		std::deque<int>	_deq;
		std::vector<int> _vec;
	
		PmergeMe();
		PmergeMe(const PmergeMe & src);

		PmergeMe & operator=(const PmergeMe & src);
		template<typename T> void _merge(T begin, T, T end);
		template<typename T> void _binaryInsertionSort(T begin, T end, int nbr);
	public:
		~PmergeMe();

		template<typename T> void diplayNumber(const T & container);
		template<typename T> void mergeInsertSort(T & container);
};

#endif
