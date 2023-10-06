/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:32:23 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/06 18:53:36 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates/MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	
	std::list<int> nstack;
	nstack.push_back(5);
	nstack.push_back(17);
	std::cout << nstack.pop_back() << std::endl;
	nstack.pop_back();
	std::cout << nstack.size() << std::endl;
	nstack.push_back(3);
	nstack.push_back(5);
	nstack.push_back(737);
	//[...]
	nstack.push_back(0);
	std::list<int>::iterator it = nstack.begin();
	std::list<int>::iterator ite = nstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(nstack);
	return 0;
}
