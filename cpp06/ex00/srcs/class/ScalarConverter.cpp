/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:30:51 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/29 20:19:13 by jusilanc         ###   ########.fr       */
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

std::string ScalarConverter::toChar(double& val)
{
	if (val < 127 && val > 0 && isprint(val))
		return (std::to_string(val));
	return (std::string("impossible"));
}

std::string ScalarConverter::toInt(double& val)
{
	if (val < INT_MIN && val > INT_MAX && isprint(val))
		return (std::to_string(val));
	return (std::string("impossible"));
}

std::string ScalarConverter::toFloat(double& val)
{
	std::string strValue = "impossible";
	if (std::isinf(val))
		return ((val < 0) ? "-inff" : "+inff");
	else if (std::isnan(val))
		return ("nanf");
	if (val < std::numeric_limits<float>::min() || val > std::numeric_limits<float>::max())
		return ("impossible");
	else
	{
		strValue = std::to_string(static_cast<float>(val));
		return (strValue + "f");
	}
	return (std::string("impossible"));
}

void ScalarConverter::convert(std::string param)
{
	try
	{
		double value;
		value = std::atof(param.c_str());
		std::cout << "char: " << toChar(value) << std::endl;
		std::cout << "int: " << toInt(value) << std::endl;
		std::cout << "float: " << toFloat(value) << std::endl;
		std::cout << "double: " << static_cast<double>(value) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

// if all bit of float or double are 1 -> -inff or +inff
