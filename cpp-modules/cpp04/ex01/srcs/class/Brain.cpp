/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 01:30:59 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/25 23:34:28 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Je suis le cerveau!";
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string idea)
{
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	this->_ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	delete [] this->_ideas;
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

void	Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}

std::string	*Brain::getIdea() const
{
	return (this->_ideas);
}
