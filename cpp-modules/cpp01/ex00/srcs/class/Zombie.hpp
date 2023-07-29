/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:06:59 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/29 08:54:51 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();

		void annonce(void);
		void setZombieName(std::string name);
		std::string getZombieName(void);

	private:
		std::string	_name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
