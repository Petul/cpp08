/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:20:08 by pleander          #+#    #+#             */
/*   Updated: 2025/01/18 11:42:31 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <array>
#include <iostream>
#include <stdexcept>
#include <vector>

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
	auto it = easyfind(vec, 5);
	std::cout << *it << std::endl;
	try
	{
		it = easyfind(vec, 0);
		std::cout << *it << std::endl;
	}
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		it = easyfind(vec, 8);
		std::cout << *it << std::endl;
	}
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::array<int, 10> arr = {1, 2, 3, 4, 6, 7, 8, 9};
	try
	{
		auto arr_it = easyfind(arr, 8);
		std::cout << *arr_it << std::endl;
	}
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		auto arr_it = easyfind(arr, 12);
		std::cout << *arr_it << std::endl;
	}
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}
}
