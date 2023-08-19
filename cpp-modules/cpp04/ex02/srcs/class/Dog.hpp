/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:46:58 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/19 19:57:27 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>

# include "AAnimal.hpp"

class Dog : public AAnimal
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
