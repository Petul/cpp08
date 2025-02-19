/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:22:50 by pleander          #+#    #+#             */
/*   Updated: 2025/01/18 18:30:03 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <algorithm>
#include <numeric>
#include <stdexcept>

Span::Span()
{
}

Span::Span(unsigned int N) : size_{N}
{
}

Span::Span(const Span& o)
{
	this->size_ = o.size_;
	this->vec_ = std::vector<int>(o.vec_.begin(), o.vec_.end());
}

Span& Span::operator=(const Span& o)
{
	if (this == &o)
	{
		return (*this);
	}
	this->size_ = o.size_;
	this->vec_ = std::vector<int>(o.vec_.begin(), o.vec_.end());
	return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (this->vec_.size() >= this->size_)
	{
		throw std::runtime_error("Error: Span is full");
	}
	auto it = std::upper_bound(this->vec_.begin(), this->vec_.end(), n);
	this->vec_.insert(it, n);
}

unsigned int Span::shortestSpan()
{
	if (this->vec_.size() == 0)
	{
		throw std::runtime_error("Error: Span is empty");
	}
	std::vector<unsigned int> diff(this->size_ - 1);
	std::adjacent_difference(this->vec_.begin(), this->vec_.end(),
	                         diff.begin());
	return (*std::min_element(diff.begin(), diff.end()));
}

unsigned int Span::longestSpan()
{
	if (this->vec_.size() == 0)
	{
		throw std::runtime_error("Error: Span is empty");
	}
	return (this->vec_.back() - this->vec_.front());
}
