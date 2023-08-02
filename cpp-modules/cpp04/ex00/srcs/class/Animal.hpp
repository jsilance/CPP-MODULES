/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:44:29 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/02 18:45:17 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const & src);
		virtual ~Animal();

		Animal &	operator=(Animal const & rhs);

		std::string		getType() const;
		virtual void	makeSound() const;

	protected:
		std::string	_type;
};

#endif
