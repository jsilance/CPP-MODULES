/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:03:39 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/13 23:44:05 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();

		Intern &	operator=(Intern const & rhs);

		AForm *		makeForm(std::string const & formName, std::string const & target) const;

	private:
		Intern(Intern const & src);
		
		AForm *		_makeShrubberyCreationForm(std::string const & target) const;
		AForm *		_makeRobotomyRequestForm(std::string const & target) const;
		AForm *		_makePresidentialPardonForm(std::string const & target) const;
};

#endif