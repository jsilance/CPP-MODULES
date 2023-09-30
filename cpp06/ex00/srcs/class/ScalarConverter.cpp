/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:30:51 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/30 19:19:57 by jusilanc         ###   ########.fr       */
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
	char c[2];

	c[0] = static_cast<char>(val);
	c[1] = 0;
	if (val < 127 && val > 0 && isprint(c[0]))
		return ("'" + std::string(c) + "'");
	else if (val <= 127 && val >= -128 && !isprint(c[0]))
		return (std::string("Non displayable"));
	return (std::string("impossible"));
}

std::string ScalarConverter::toInt(double& val)
{
	if (val >= INT_MIN && val <= INT_MAX)
		return (std::to_string(static_cast<int>(val)));
	return (std::string("impossible"));
}

std::string ScalarConverter::toFloat(float val)
{
	std::string strValue = "impossible";
	if (std::isinf(val))
		return ((val < 0) ? "-inff" : "+inff");
	else if (std::isnan(val))
		return ("nanf");
	if (val < std::numeric_limits<float>::lowest() || val > std::numeric_limits<float>::max())
		return ("impossible");
	else
	{
		strValue = std::to_string(static_cast<float>(val));
		return (strValue + "f");
	}
	return (std::string("impossible"));
}

std::string ScalarConverter::toDouble(double val)
{
	if (std::isinf(val))
		return ((val < 0) ? "-inff" : "+inff");
	else if (std::isnan(val))
		return ("nanf");
	if (val < std::numeric_limits<double>::lowest() || val > std::numeric_limits<double>::max())
		return ("impossible");
	return (std::to_string(static_cast<double>(val)));
}

void ScalarConverter::convert(std::string param)
{
	try
	{
		double value;
		if (param.size() == 1 && !isdigit(param.c_str()[0]))
			value = param.c_str()[0];
		else if (param.size() > 1 && std::strtod(param.c_str(), NULL) == 0)
			throw std::exception();
		else
			value = atof(param.c_str());
		std::cout << "char: " << toChar(value) << std::endl;
		std::cout << "int: " << toInt(value) << std::endl;
		std::cout << "float: " << toFloat(static_cast<float>(value)) << std::endl;
		std::cout << "double: " << toDouble(value) << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}
