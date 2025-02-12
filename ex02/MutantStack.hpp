/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:42:27 by pleander          #+#    #+#             */
/*   Updated: 2025/01/19 11:43:50 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
   public:
	MutantStack() : std::stack<T>()
	{
	}

	MutantStack(const MutantStack<T>& o) : std::stack<T>(o)
	{
	}

	MutantStack<T>& operator=(const MutantStack<T>& o)
	{
		if (this == &o)
		{
			return (*this);
		}
		std::stack<T>::operator=(o);
		return (*this);
	}

	~MutantStack()
	{
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator
	    reverse_iterator;

	typedef
	    typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator
	    const_reverse_iterator;

	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
	reverse_iterator rbegin()
	{
		return (this->c.rbegin());
	}
	reverse_iterator rend()
	{
		return (this->c.rend());
	}

	const_iterator cbegin() const
	{
		return (this->c.cbegin());
	}
	const_iterator end() const
	{
		return (this->c.cend());
	}
	const_reverse_iterator crbegin() const
	{
		return (this->c.crbegin());
	}
	const_reverse_iterator crend() const
	{
		return (this->c.crend());
	}
};
