/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:46:25 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/25 23:22:50 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const & src);
		virtual ~Cat();

		Cat &	operator=(Cat const & rhs);

		virtual void	makeSound() const;
		std::string		getType() const;
		Brain			*getBrain() const;
	private:
		Brain	*_brain;
};

#endif
