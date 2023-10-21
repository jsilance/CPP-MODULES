/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:37:14 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/21 12:53:21 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <deque>
# include <list>

class PmergeMe
{
	private:
		PmergeMe();
		PmergeMe(const PmergeMe & src);

		PmergeMe & operator=(const PmergeMe & src);
	public:
		~PmergeMe();

		template<typename T> void diplayNumber(const T & container);
		void mergeInsetDeque(std::deque<int> & deq);
		void mergeInsetList(std::list<int> & lst);

};

#endif
