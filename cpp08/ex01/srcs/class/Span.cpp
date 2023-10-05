/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:44:30 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/05 21:59:49 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int n): _n(n)
{
}
Span::~Span()
{
}

Span& Span::operator=(Span const & src)
{
	*this = src;
	return (*this);
}

void Span::printNumbers()
{
	for (int i = 0; i < _numbers.size(); i++)
		std::cout << _numbers[i] << std::endl;
}

void Span::printNumbers(std::vector<int> tab)
{
	for (int i = 0; i < tab.size(); i++)
		std::cout << tab[i] << std::endl;
}

void Span::addNumber(unsigned int n, int val)
{
	if (_numbers.size() >= _n)
		throw Span::notEnoughSpace();
	for (int i = 0; i < n; i++)
		_numbers.push_back(val);
}

void Span::addNumber(unsigned int n)
{
	if (_numbers.size() >= _n)
		throw Span::notEnoughSpace();
	_numbers.push_back(n);
}

unsigned int Span::shortestSpan()
{
	std::vector<int> tab(_numbers);

	if (tab.size() < 2)
		throw Span::notEnough();
	
	std::sort(tab.begin(), tab.end());
	unsigned int len = tab[1] - tab[0];
	for (int i = 0; i < tab.size() - 1; i++)
		if ((unsigned int)(tab[i + 1] - tab[i]) < len)
			len = tab[i + 1] - tab[i];
	return (len);
}

unsigned int Span::longestSpan()
{
	std::vector<int> tab(_numbers);

	if (tab.size() < 2)
		throw Span::notEnough();
	
	std::sort(tab.begin(), tab.end());
	return (*max_element(tab.begin(), tab.end()) - *min_element(tab.begin(), tab.end()));
	
}
