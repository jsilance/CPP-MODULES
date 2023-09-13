/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:09:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/13 12:15:14 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(std::string const &target);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const & src);
		
		void execute(Bureaucrat const &executor) const;
		
	private:
		const std::string _target;
		
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & src);
};

#endif
