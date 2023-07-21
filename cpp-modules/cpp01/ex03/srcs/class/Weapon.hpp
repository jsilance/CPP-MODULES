/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:33:09 by jusilanc          #+#    #+#             */
/*   Updated: 2023/07/21 15:14:45 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	public:
		Weapon(std::string weapon);
		~Weapon();

		std::string& getType(void);
		void setType(const std::string& type);

	private:
		std::string type;
};

#endif
