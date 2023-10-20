/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 03:19:49 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/20 04:33:02 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <stack>
# include <cmath>

class RPN
{
	public:
		RPN();
		RPN(RPN const & src);
		~RPN();

		RPN&	operator=(RPN const & rhs);

		void	printStack(void) const;
		void	compute(std::string const & input);

	private:
		std::stack<int>	_stack;
		std::string		_input;

		void	_push(int const & value);
		void	_pop();
		void	_add();
		void	_sub();
		void	_mul();
		void	_div();

		class EmptyStackException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Empty stack");
				}
		};

		class NotEnoughValuesException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Not enough values");
				}
		};

		class InvalidValueException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Invalid value");
				}
		};

		class InvalidInstructionException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Invalid instruction");
				}
		};
};

#endif
