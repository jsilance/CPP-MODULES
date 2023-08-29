/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:38:25 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/16 04:46:35 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &copy);
		~Brain(void);

		Brain &operator=(Brain const &rhs);
		
		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const;
		void printIdeas(void) const;

	private:
		std::string	_ideas[100];
};

#endif
