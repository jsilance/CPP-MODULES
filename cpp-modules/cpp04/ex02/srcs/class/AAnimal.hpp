/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:55:26 by jusilanc          #+#    #+#             */
/*   Updated: 2023/08/19 20:01:18 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

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
