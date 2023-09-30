/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:15:42 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/01 00:09:03 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class/A.hpp"
#include "class/B.hpp"
#include "class/C.hpp"
#include "class/Base.hpp"

Base *generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
		case(0):
			std::cout << "A generated" << std::endl;
			return (new A);
		case(1):
			std::cout << "B generated" << std::endl;
			return (new B);
		default:
			std::cout << "C generated" << std::endl;
			return (new C);
	}
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& ptr)
{
	try
	{
		A &a = dynamic_cast<A&>(ptr);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::exception &e) {}
	try
	{
		B &b = dynamic_cast<B&>(ptr);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch (std::exception &e) {}
	try
	{
		C &c = dynamic_cast<C&>(ptr);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch (std::exception &e) {}
}

int main()
{
	Base *base = generate();
	identify(base);
	identify(*base);

	delete base;
	return (0);	
}
