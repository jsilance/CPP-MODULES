/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:30:51 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/17 18:39:05 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.cpp"

ScalarConverter::ScalarConvert()
{
}

ScalarConverter::ScalarConvert(ScalarConverter const & src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const & src)
{
	*this = src;
	return (this);
}

void ScalarConverter::fromChar()
{
	this->valInt = static_cast<int>(this->valChar);
	this->valFloat = static_cast<float>(this->valChar);
	this->valDouble = static_cast<double>(this->valChar);
}

void ScalarConverter::convert(std::string param)
{
	// defineType(param);
	switch (this->type)
	{
	case (CHAR_TYPE):
		/* code */
		break;
	
	default:
		break;
	}
	this->valChar = param[0];
	fromChar();

	if (isprint(this->valChar))
		std::cout << "char: " << this->valChar << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "Int: " << this->valInt << std::endl;
	
}

// if str.size() > 1 check if its a string >> nan
//					 chack if its a valid int || float || double