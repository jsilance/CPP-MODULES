/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:55:24 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/29 12:40:09 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <cctype>
# include <cstdlib>

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

		static void fromChar(std::string param);
		static void fromInt(std::string param);
		static void fromFloat(std::string param);
		static void fromDouble(std::string param);
		
		static int	defineType(std::string param);
		static void printValue(char valChar, int valInt, float valFloat, double valDouble);
		static void printString();

	public:
		static void convert(std::string param);
};

#endif