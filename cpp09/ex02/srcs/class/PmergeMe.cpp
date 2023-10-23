/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:42:15 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/23 02:04:21 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe & src)
{
	*this = src;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe & PmergeMe::operator=(const PmergeMe & src)
{
	if (this != &src)
	{
	}
	return (*this);
}

template<typename T> void PmergeMe::diplayNumber(const T & container)
{
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template<typename T> void PmergeMe::_merge(T & container)
{
	typename T::iterator it = container.begin();
	
	container.size();
}

template<typename T> void PmergeMe::_binaryInsertionSort(T begin, T end, int nbr)
{
	T middle = begin + std::distance(begin, end) / 2;

	if (std::distance(begin, end) == 1 || *middle == nbr)
	{
		if (*middle >= nbr)
		{
			if (dynamic_cast<std::deque<int>::iterator> (begin))
				this->_deq.insert(middle, nbr);
			else if (dynamic_cast<std::vector<int>::iterator> (begin))
				this->_vec.insert(middle, nbr);
			else
				std::cout << "Error: container not supported" << std::endl;
		}
		else
			end = container.insert(end, nbr);
		return ;
	}
	if (nbr < *middle)
		_binaryInsertionSort(begin, middle, nbr);
	else if (nbr > *middle)
		_binaryInsertionSort(middle, end, nbr);
}

template<typename T> void PmergeMe::mergeInsertSort(T & deq)
{
	this->merge();
}
