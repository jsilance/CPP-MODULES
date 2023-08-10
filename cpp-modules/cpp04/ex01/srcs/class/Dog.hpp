/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:46:58 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/02 18:47:47 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const & src);
		virtual ~Dog();

		Dog &	operator=(Dog const & rhs);

		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif
