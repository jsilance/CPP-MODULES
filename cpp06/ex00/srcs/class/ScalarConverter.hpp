/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:55:24 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/17 18:57:09 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <cctype>

enum type
{
	STRING_TYPE = -1,
	CHAR_TYPE,
	INT_TYPE,
	FLOAT_TYPE,
	DOUBLE_TYPE	
};

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & src);
		~ScalarConverter();

		ScalarConverter& operator=(ScalarConverter const & src);

		static void fromChar();

		static int type;

		static char valChar;
		static int valInt;
		static float valFloat;
		static double valDouble;

	public:
		static void convert(std::string param);
};

#endif