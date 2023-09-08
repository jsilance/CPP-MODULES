/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:07:45 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/08 17:51:17 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class AForm;
class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(std::string name, int gToSign, int gToEx);
		~AForm();

		AForm &operator=(AForm const & src);

		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExe() const;

		void setSigned(bool val);
		void setGradeToSign(int grade);
		void setGradeToExe(int grade);

		virtual void signForm(Bureaucrat user);
		virtual std::string signFrom();

		virtual void execute(Bureaucrat const & executor) const = 0;

	private:
		const std::string _name;
		bool _signed;
		int _gradeToSign;
		int _gradeToExe;

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class NotSignedException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& o, AForm const& rhs);

#endif