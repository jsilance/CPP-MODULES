/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:38:25 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/11 01:36:33 by jusilanc         ###   ########.fr       */
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
		std::ostream &operator<<(std::ostream &o, Brain const &i);
		
		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const;
		void printIdeas(void) const;

	private:
		std::string	_ideas[100];
};

#endif
