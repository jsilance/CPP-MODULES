/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:37:14 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/28 05:55:23 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <deque>
# include <vector>
# include <algorithm>
# include <ctime>
# include <iterator>

# include <iostream>


class PmergeMe
{
	private:
		std::deque<int>	_deq;
		std::vector<int> _vec;

		int _solo;
		std::vector<std::pair<int, int> > _pairs;
	
		PmergeMe(const PmergeMe & src);

		PmergeMe & operator=(const PmergeMe & src);
		template <typename T> void _merge(T & cont);
		size_t _jacobSthal(size_t n);
		void _binSearch(std::deque<int>::iterator begin, std::deque<int>::iterator end, int nbr);
		void _binSearch(std::vector<int>::iterator begin, std::vector<int>::iterator  end, int nbr);
		template <typename T> void _insertionSort(T & cont);

		template <typename T> void _displayNumber(const T & container);
		template <typename T> void _displayNumber(const T & begin, const T & end);
	public:
		PmergeMe();
		~PmergeMe();

		void addNbr(int & nb);
		void mergeInsertSort();
		int sorterVerifier();
};

#endif
