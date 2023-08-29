/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:44:29 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/29 19:25:09 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();

		AAnimal &operator=(AAnimal const & rhs);

		std::string getType() const;
		virtual void makeSound() const = 0;

	protected:
		std::string	_type;
};

#endif
