/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:22:52 by pleander          #+#    #+#             */
/*   Updated: 2025/01/18 21:52:29 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>

class Span
{
   public:
	Span(unsigned int N);
	Span(const Span &);
	Span &operator=(const Span &);
	~Span();

	void addNumber(int n);

	template <typename Iterator>
	void addNumbers(Iterator begin, Iterator end);
	int shortestSpan();
	int longestSpan();

   private:
	std::vector<int> vec_;
	unsigned int size_;
};

template <typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end)
{
	for (auto it = begin; it != end; it++)
	{
		addNumber(*it);
	}
}
