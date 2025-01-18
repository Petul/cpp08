/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:32:47 by pleander          #+#    #+#             */
/*   Updated: 2025/01/18 18:33:23 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Span.hpp"

int main(void)
{
	{
		std::cout << "Subject example: " << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		srand(time(0));
		Span s(10000);
		for (int i = 0; i < 10000; i++)
		{
			s.addNumber(std::rand());
		}
		std::cout << s.longestSpan() << std::endl;
		std::cout << s.shortestSpan() << std::endl;
	}
}
