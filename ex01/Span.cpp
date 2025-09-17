/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:30:21 by jetan             #+#    #+#             */
/*   Updated: 2025/09/17 17:14:20 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// If there are no numbers stored, or only one, no span can be found
const char *Span::notFoundException::what() const throw()
{	
	return "No numbers stored, or only one, no span can be found";
}

// any attempt to add a new element if there are already N elements stored
const char *Span::fillException::what() const throw()
{
	return "Already N elements stored";
}

// ind out the longest span between all the numbers stored, and return it
int Span::longestSpan()
{
	if (this->container.size() < 2)
		throw notFoundException();
		
	std::sort(this->container.begin(), this->container.end());
	
	unsigned int span = this->container.back() - this->container.front();
	return span;
}

// find out the shortest span between all the numbers stored, and return it
int	Span::shortestSpan()
{
	if (this->container.size() < 2)
		throw notFoundException();
	
	std::sort(this->container.begin(), this->container.end());
	
	unsigned int span = container[1] - container[0];
	for (unsigned int i = 1; i < this->container.size(); i++)
	{
		unsigned int nextPair = this->container[i + 1] - this->container[i];
		if (nextPair < span)
		{
			span = nextPair;
		}
	}
	return span;
}

void Span::addNumber(unsigned int num)
{
	if (this->container.size() >= N)
		throw fillException();
	this->container.push_back(num);
}

Span::Span(): N(0) {}

Span::Span(unsigned int _n)
{
	this->N = _n;
}

Span::Span(const Span &other): N(other.N) ,container(other.container) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		N = other.N;
		container = other.container;
	}
	return *this;
}

Span::~Span() {}