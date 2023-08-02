/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:46:25 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/02 18:46:52 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const & src);
		virtual ~Cat();

		Cat &	operator=(Cat const & rhs);

		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif
