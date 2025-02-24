/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:08:25 by pleander          #+#    #+#             */
/*   Updated: 2025/01/18 11:29:06 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T& container, int to_find)
{
	auto it = std::find(container.begin(), container.end(), to_find);
	if (it == container.end())
	{
		throw std::runtime_error{"Error: could not find value " +
		                         std::to_string(to_find) + " in container."};
	}
	return (it);
}
