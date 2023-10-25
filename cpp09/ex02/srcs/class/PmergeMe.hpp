/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:37:14 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/25 21:36:36 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <deque>
# include <vector>
# include <iostream>

class PmergeMe
{
	private:
		std::deque<int>	_deq;
		std::vector<int> _vec;
	
		PmergeMe(const PmergeMe & src);

		PmergeMe & operator=(const PmergeMe & src);
		template<typename T> void _merge(T begin, T end);
		template<typename T> void _insertionSort(T begin, T end);
		template<typename T> void _displayNumber(const T & container);
		template<typename T> void _displayNumber(const T & begin, const T & end);
	public:
		PmergeMe();
		~PmergeMe();

		void addNbr(int & nb);
		void mergeInsertSort();
		int sorterVerifier();
};

#endif
