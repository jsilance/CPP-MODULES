/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:07:45 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/01 18:36:04 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name, int gToSign, int gToEx);
		~Form();

		Form &operator=(Form const & src);

		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExe() const;

		void setSigned(bool val);
		void setGradeToSign(int grade);
		void setGradeToExe(int grade);

		void beSigned(Bureaucrat user);
		std::string signFrom();

	private:
		const std::string _name;
		bool _signed;
		int _gradeToSign;
		int _gradeToExe;

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

std::ostream& operator<<(std::ostream& o, Form const& rhs);

#endif