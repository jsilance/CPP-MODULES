/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:13:19 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/08 16:55:13 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const & src);
		
		void execute(Bureaucrat const & executor) const;
		std::string getTarget() const;
		
	private:
		const std::string _target;
		
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
};

#endif