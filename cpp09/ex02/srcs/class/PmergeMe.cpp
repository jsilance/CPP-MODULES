/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:42:15 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/25 22:04:02 by jusilanc         ###   ########.fr       */
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

template<typename T> void PmergeMe::_displayNumber(const T & container)
{
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

template<typename T> void PmergeMe::_displayNumber(const T & begin, const T & end)
{
	for (T it = begin; it != end; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::addNbr(int & nb)
{
	this->_deq.push_back(nb);
	this->_vec.push_back(nb);
}

template<typename T> void PmergeMe::_insertionSort(T begin, T end)
{
	for (T it = begin + 1; it != end; ++it)
	{
		typename T::value_type key = *it;
		T j = it - 1;
		while (j >= begin && *j > key)
		{
			*(j + 1) = *j;
			--j;
		}
		*(j + 1) = key;
	}
}

template<typename T> void PmergeMe::_merge(T begin, T end)
{
	if (std::distance(begin, end) <= 1)
		return ;
	
	T mid = begin + std::distance(begin, end) / 2;

	_merge(begin, mid);
	_merge(mid + 1, end);

	_insertionSort(begin, end);
}

void PmergeMe::mergeInsertSort()
{
	std::deque<int>::iterator it = this->_deq.begin();
	std::deque<int>::iterator ite =this->_deq.end();
	
	std::cout << "Before: ";
	_displayNumber(_deq);
	clock_t startd = std::clock();

	this->_merge(it, ite);
	
	clock_t endd = std::clock();
	std::cout << "After: ";
	_displayNumber(_deq);

	std::vector<int>::iterator itv = this->_vec.begin();
	std::vector<int>::iterator itve = this->_vec.end();
	
	// std::cout << "Before: ";
	// displayNumber(_vec);
	clock_t startv = std::clock();

	_merge(itv, itve);
	
	clock_t endv = std::clock();
	// std::cout << "After: ";
	// displayNumber(_vec);

	std::cout << "Time to process a range of	" << this->_deq.size() << " elements whit std::deque<int> : " << endd - startd << " us" << std::endl;
	std::cout << "Time to process a range of	" << this->_vec.size() << " elements whit std::vector<int> : " << endv - startv << " us" << std::endl;
}

int PmergeMe::sorterVerifier(void)
{
	for (int i = 0; i < _deq.size() - 1; i++)
	{
		if (_deq[i] > _deq[i + 1])
		{
			std::cout << "The deque list is not sorted! FAIL\n";
			return (1);
		}
	}
	for (int i = 0; i < _vec.size() - 1; i++)
	{
		if (_vec[i] > _vec[i + 1])
		{
			std::cout << "The vector list is not sorted! FAIL\n";
			return (1);
		}
	}
	return (0);
}