/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 01:30:59 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/16 04:46:45 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
	return ;
}

std::string	Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}

void	Brain::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
	return ;
}
