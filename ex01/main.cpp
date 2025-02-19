/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:32:47 by pleander          #+#    #+#             */
/*   Updated: 2025/01/18 21:50:44 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <array>
#include <iostream>
#include <limits>

#include "Span.hpp"

int main(void)
{
	srand(time(0));
	{
		std::cout << "Subject example: " << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\nLarge numbers: " << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(std::numeric_limits<int>::max());
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(std::numeric_limits<int>::min());
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\nAdding 10 000 numbers" << std::endl;
		Span s(10000);
		for (int i = 0; i < 10000; i++)
		{
			s.addNumber(std::rand());
		}
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
	}
	{
		std::cout << "\nAdding a range of numbers" << std::endl;
		Span s(10000);
		std::vector<int> vec;
		for (int i = 0; i < 10000; i++)
		{
			vec.push_back(std::rand());
		}
		s.addNumbers(vec.begin(), vec.end());
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
	}

	{
		std::cout << "\nAdding another range of numbers" << std::endl;
		Span s(10000);
		std::array<int, 10000> arr;
		for (int i = 0; i < 10000; i++)
		{
			arr[i] = std::rand();
		}
		s.addNumbers(arr.begin(), arr.end());
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
	}
}
