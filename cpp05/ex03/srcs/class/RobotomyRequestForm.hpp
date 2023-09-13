/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:08:41 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/13 13:40:15 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <fstream>
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const & src);
		
		void execute(Bureaucrat const & executor) const;
		std::string getTarget() const;
		
	private:
		const std::string _target;
		
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & src);
};

#endif