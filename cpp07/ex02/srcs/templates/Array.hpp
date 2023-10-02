/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusilanc <jusilanc@s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 00:05:35 by jusilanc          #+#    #+#             */
/*   Updated: 2023/10/03 01:24:22 by jusilanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	private:
		T		*_data;
		size_t	_size;
	public:
		Array(): _data(NULL), _size(0) {}
		Array(unsigned int n): _data(new T[n]), _size(n) {}
		Array(const Array<T> &src): _data(NULL), _size(0)
		{
			*this = src;
		}
		~Array()
		{
			delete [] _data;
		}

		Array<T>	&operator=(const Array<T> &src)
		{
			if (this != &src)
				delete [] _data;
			_size = src.size;
			_data = new T[src.size];
			for (int i = 0; i < _size; i++)
				_data[i] = src._data[i];
			return (*this);
		}
		T	&operator[](const int index) const
		{
			if (i < 0 || static_cast<size_t>(index) >= _size)
				throw outOfRange();
			return (_data[index])
		}

		size_t	size() const
		{
			return (_size);
		}

		class outOfRange: public std::exception
		{
			public:
				virtual cinst char *what() const throw()
				{
					return ("Array::exception: index: out of range");
				}
		}
};

#endif
