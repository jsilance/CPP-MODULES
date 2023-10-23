/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 03:50:14 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/22 23:36:27 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class/RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./rpn \"<expression>\"" << std::endl;
		return (1);
	}
	RPN	rpn;

	try
	{
		rpn.compute(argv[1]);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}