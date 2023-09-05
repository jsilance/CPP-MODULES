/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:09:34 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/05 17:10:01 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const & src);
		
		virtual void executeConcrete() const;
		
	private:
		const std::string _target;
		
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & src);
};

#endif
