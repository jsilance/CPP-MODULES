/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 08:08:13 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/01 18:53:54 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"

class Bureaucrat;
class AForm;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();

		Bureaucrat &operator=(Bureaucrat const & rhs);

		std::string getName() const;
		void setName(std::string name) const;
		int getGrade() const;

		void incrementGrade();
		void decrementGrade();

		void signForm(AForm & form);

	private:
		const std::string _name;
		int _grade;

	class GradeTooHighException: public std::exception
	{
		public:
			GradeTooHighException() throw();
			virtual ~GradeTooHighException() throw();
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException: public std::exception
	{
		public:
			GradeTooLowException() throw();
			virtual ~GradeTooLowException() throw();
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const& rhs);

#endif
