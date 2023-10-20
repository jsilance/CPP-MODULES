/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 03:33:39 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/20 04:42:01 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : _stack(), _input()
{
}

RPN::RPN(RPN const & src) : _stack(src._stack), _input(src._input)
{
}

RPN::~RPN()
{
}

RPN&	RPN::operator=(RPN const & rhs)
{
	if (this != &rhs)
	{
		this->_stack = rhs._stack;
		this->_input = rhs._input;
	}
	return (*this);
}

void RPN::printStack(void) const
{
	std::stack<int>	tmp = _stack;

	while (!tmp.empty())
	{
		std::cout << tmp.top() << std::endl;
		tmp.pop();
	}
}

void RPN::compute(std::string const & input)
{
	std::stringstream	ss(input);
	std::string			token;
	int				val;

	_input = input;
	while (ss >> token)
	{
		if (token.length() == 1 && !isdigit(token[0]))
		{
			switch (token[0])
			{
				case '+':
					_add();
					break;
				case '-':
					_sub();
					break;
				case '*':
					_mul();
					break;
				case '/':
					_div();
					break;
				default:
					throw RPN::InvalidInstructionException();
			}
		}
		else
		{
			std::stringstream(token) >> val;
			_push(val);
		}
	}
	if (_stack.size() != 1)
		throw RPN::InvalidInstructionException();
	printStack();
}

void RPN::_push(int const & value)
{
	_stack.push(value);
}

void RPN::_pop(void)
{
	if (_stack.empty())
		throw RPN::EmptyStackException();
	_stack.pop();
}

void RPN::_add(void)
{
	if (_stack.size() < 2)
		throw RPN::NotEnoughValuesException();
	int	a = _stack.top();
	_stack.pop();
	int	b = _stack.top();
	_stack.pop();
	_stack.push(a + b);
}

void RPN::_sub(void)
{
	if (_stack.size() < 2)
		throw RPN::NotEnoughValuesException();
	int	a = _stack.top();
	_stack.pop();
	int	b = _stack.top();
	_stack.pop();
	_stack.push(a - b);
}

void RPN::_mul(void)
{
	if (_stack.size() < 2)
		throw RPN::NotEnoughValuesException();
	int	a = _stack.top();
	_stack.pop();
	int	b = _stack.top();
	_stack.pop();
	_stack.push(a * b);
}

void RPN::_div()
{
	if (_stack.size() < 2)
		throw RPN::NotEnoughValuesException();
	int	a = _stack.top();
	_stack.pop();
	int	b = _stack.top();
	_stack.pop();
	if (b == 0)
		throw RPN::InvalidValueException();
	_stack.push(a / b);
}
