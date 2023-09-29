/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:57:11 by jusilanc          #+#    #+#             */
/*   Updated: 2023/09/29 12:03:17 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: " << argv[0] << " <input>" << std::endl;
		return (1);
	}

	ScalarConverter::convert(std::string(argv[1]));
	return (0);
}
