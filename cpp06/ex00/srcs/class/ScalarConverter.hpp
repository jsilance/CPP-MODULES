/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:55:24 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/14 01:57:08 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>

class ScalarConverter
{
	public:
		ScalarConverter(std::string const &input);
		ScalarConverter(ScalarConverter const &copy);
		~ScalarConverter();

		ScalarConverter &operator=(ScalarConverter const &rhs);

		void	convert();
		void	displayChar();
		void	displayInt();
		void	displayFloat();
		void	displayDouble();

		class ImpossibleException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:
		ScalarConverter();

		std::string		_input;
		char			_char;
		int				_int;
		float			_float;
		double			_double;
};

#endif