/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:07:45 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/05 09:50:54 by jusilanc         ###   ########.fr       */
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
		AForm(std::string name, std::string target, int gToSign, int gToEx);
		~AForm();

		AForm &operator=(AForm const & src);

		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExe() const;
		std::string getTarget() const;

		void setSigned(bool val);
		void setGradeToSign(int grade);
		void setGradeToExe(int grade);

		virtual void beSigned(Bureaucrat user) = 0;
		virtual std::string signFrom() = 0;

		// execute need to be the abstrakt point

	private:
		const std::string _name;
		const std::string _target;
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

std::ostream& operator<<(std::ostream& o, AForm const& rhs);

#endif