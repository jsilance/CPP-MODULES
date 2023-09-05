/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:08:41 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/05 17:09:06 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <fstream>

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const & src);
		
		virtual void executeConcrete() const;
		
	private:
		const std::string _target;
		
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & src);
};

#endif