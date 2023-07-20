/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:06:59 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/20 18:18:34 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
public:
	Zombie();
	~Zombie();

	void annonce(void);
	void setZombieName(std::string name);
	std::string getZombieName(void);

private:
	std::string	name;
};

Zombie *zombieHorde(int n, std::string name);

#endif
