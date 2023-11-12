/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:42:15 by jusilanc          #+#    #+#             */
/*   Updated: 2023/11/12 16:32:52 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(): _solo(-1)
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
	for (typename T::const_iterator it = container.begin(); it < container.end(); it++)
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

void PmergeMe::_binSearch(std::deque<int>::iterator begin, std::deque<int>::iterator end, int nbr)
{
	std::deque<int>::iterator mid = begin + std::distance(begin, end) / 2;

	if (std::distance(begin, end) == 1 || nbr == *mid)
	{
		if (nbr <= *mid)
			_deq.insert(mid, nbr);
		else
			_deq.insert(end, nbr);
	}
	else if (nbr < *mid)
		_binSearch(begin, mid, nbr);
	else
		_binSearch(mid, end, nbr);
}

void PmergeMe::_binSearch(std::vector<int>::iterator begin, std::vector<int>::iterator  end, int nbr)
{
	std::vector<int>::iterator  mid = begin + std::distance(begin, end) / 2;

	if (std::distance(begin, end) == 1 || nbr == *mid)
	{
		if (nbr <= *mid)
			_vec.insert(mid, nbr);
		else
			_vec.insert(end, nbr);
	}
	else if (nbr < *mid)
		_binSearch(begin, mid, nbr);
	else
		_binSearch(mid, end, nbr);
}

template<typename T> void PmergeMe::_merge(T & cont)
{
	for (size_t i = 0; i < cont.size(); i++)
	{
		if (i % 2)
		{
			if (cont[i - 1] <= cont[i])
				_pairs.push_back(std::make_pair(cont[i - 1], cont[i]));
			else if (cont[i - 1] > cont[i])
				_pairs.push_back(std::make_pair(cont[i], cont[i - 1]));
		}
		else if (i == cont.size() - 1)
			_solo = cont[i];
	}
	
	std::sort(_pairs.begin(), _pairs.end());
	cont.clear();
	for (size_t i = 0; i < _pairs.size(); i++)
	{
		cont.push_back(_pairs[i].first);
		if (i == _pairs.size() - 1)
			cont.push_back(_pairs[i].second);
	}
}

size_t PmergeMe::_jacobSthal(size_t n)
{
    if (n != 0 && n != 1)
		return (_jacobSthal(n - 1) + 2 * _jacobSthal(n - 2));
    return (n);
}

template<typename T> void PmergeMe::_insertionSort(T & deq)
{
	size_t k = 1;
	size_t j = 1;
	size_t n = 2;

	for (size_t i = 1; i < _pairs.size(); i++)
	{
		if (i == j)
		{
			n++;
			j = _jacobSthal(n);
			if (j > _pairs.size())
				k = _pairs.size();
			else
				k = j;
		}
			_binSearch(deq.begin() + _pairs.size() - k + 1, deq.end(), _pairs[_pairs.size() - k].second);
		k--;
	}
	if (this->_solo != -1)
		_binSearch(deq.begin(), deq.end(), _solo);
}

void PmergeMe::mergeInsertSort()
{
	_solo = -1;
	
	std::cout << "Before: ";
	_displayNumber(_deq);
	clock_t startd = std::clock();

	this->_merge(_deq);
	this->_insertionSort(_deq);
	
	clock_t endd = std::clock();
	std::cout << "After: ";
	_displayNumber(_deq);

	_pairs.clear();
	_solo = -1;

	clock_t startv = std::clock();

	_merge(_vec);
	_insertionSort(_vec);
	
	clock_t endv = std::clock();

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
