/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:38:25 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/26 00:00:29 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(std::string idea);
		Brain(Brain const &copy);
		~Brain(void);

		Brain &operator=(Brain const &rhs);
		
		void setIdea(int index, std::string idea);
		std::string *getIdea() const;

	// protected:
		std::string	*_ideas;
};

#endif
