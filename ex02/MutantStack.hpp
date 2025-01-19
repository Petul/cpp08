/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 10:42:27 by pleander          #+#    #+#             */
/*   Updated: 2025/01/19 11:40:45 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
   public:
	MutantStack();
	MutantStack(const MutantStack<T>&);
	MutantStack& operator=(const MutantStack<T>&);
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator
	    reverse_iterator;

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
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& o) : std::stack<T>(o)
{
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& o)
{
	if (this == &o)
	{
		return (*this);
	}
	std::stack<T>::operator=(o);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}
