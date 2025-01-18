/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:22:52 by pleander          #+#    #+#             */
/*   Updated: 2025/01/18 17:16:20 by pleander         ###   ########.fr       */
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
	int shortestSpan();
	int longestSpan();

   private:
	std::vector<int> vec_;
	unsigned int size_;
};
