/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:30:51 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/29 13:24:26 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const & src)
{
	*this = src;
	return (*this);
}

int ScalarConverter::defineType(std::string param)
{
	int i = 0;
	int digit = 0;
	int minus = 0;
	int letters = 0;
	int dot = 0;
	int isFloat = 0;

	while (param[i])
	{
		if (isdigit(param[i]))
			digit++;
		else if (param[i] == '.')
			dot++;
		else if (!isdigit(param[i]) && !isspace(param[i]))
		{
			if (param[i] == 'f')
				isFloat++;
			if (param[i] == '-' || param[i] == '+')
				minus++;
			else
				letters++;
		}
		i++;
	}
	if (isFloat == 1 && letters == 1 && dot == 1 && digit > 0 && minus < 2)
		return (FLOAT_TYPE);
	else if (param.size() == 1 && digit == 0)
		return (CHAR_TYPE);
	else if (letters == 0 && dot == 1 && digit > 0 && minus < 2)
		return (DOUBLE_TYPE);
	else if (letters == 0 && minus < 2 && digit < 10 && dot == 0)
		return (INT_TYPE);
	return (STRING_TYPE);
}

void ScalarConverter::fromChar(std::string param)
{
	char valChar = param[0];
	int valInt = static_cast<int>(valChar);
	float valFloat = static_cast<float>(valChar);
	double valDouble = static_cast<double>(valChar);
	
	printValue(valChar, valInt, valFloat, valDouble);
}

void ScalarConverter::fromInt(std::string param)
{
	int valInt = atoi(param.c_str());	
	char valChar = static_cast<char>(valInt);
	float valFloat = static_cast<float>(valInt);
	double valDouble = static_cast<double>(valInt);
	
	printValue(valChar, valInt, valFloat, valDouble);
}

void ScalarConverter::fromFloat(std::string param)
{
	float valFloat = atof(param.c_str());
	char valChar = static_cast<char>(valFloat);
	int valInt = static_cast<int>(valFloat);
	double valDouble = static_cast<double>(valFloat);
	
	printValue(valChar, valInt, valFloat, valDouble);
}

void ScalarConverter::fromDouble(std::string param)
{
	double valDouble = strtod(param.c_str(), NULL);
	char valChar = static_cast<char>(valDouble);
	int valInt = static_cast<int>(valDouble);
	double valFloat = static_cast<float>(valDouble);
	
	printValue(valChar, valInt, valFloat, valDouble);
}

void ScalarConverter::printValue(char valChar, int valInt, float valFloat, double valDouble)
{
	if (isprint(valChar))
		std::cout << "char: " << valChar << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << valInt << std::endl;
	if (valFloat > static_cast<float>(static_cast<int>(valFloat)))
		std::cout << "float: " << static_cast<float>(valFloat) << 'f' << std::endl;
	else
		std::cout << "float: " << static_cast<float>(valFloat) << ".0f" << std::endl;
	if (valDouble > static_cast<double>(static_cast<int>(valDouble)))
		std::cout << "double: " << static_cast<double>(valDouble) << std::endl;
	else
		std::cout << "double: " << static_cast<double>(valDouble) << ".0" << std::endl;
}

void ScalarConverter::printString()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void ScalarConverter::convert(std::string param)
{
	int type = defineType(param);
	switch (type)
	{
		case (CHAR_TYPE):
			fromChar(param);
			break;
		case (INT_TYPE):
			fromInt(param);
			break;
		case (FLOAT_TYPE):
			fromFloat(param);
			break;
		case (DOUBLE_TYPE):
			fromDouble(param);
			break;
		default:
			printString();
			break;
	}
}

// if all bit of float or double are 1 -> -inff or +inff