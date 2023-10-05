/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:44:28 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/05 21:59:02 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>

class Span
{
	private:
		Span();
		unsigned int _n;
		std::vector<int> _numbers;
	public:
		Span(unsigned int n);
		~Span();
		
		Span& operator=(Span const & src);
		
		void printNumbers();
		void printNumbers(std::vector<int> tab);
		void addNumber(unsigned int n);
		void addNumber(unsigned int n, int val);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		
		class notEnough: public std::exception
		{
			const char *what() const throw()
			{
				return ("Not enough element in the Span to do this");
			}
		};
		
		class notEnoughSpace: public std::exception
		{
			const char *what() const throw()
			{
				return ("Not enough space in the Span to do this");
			}
		};
};

#endif
