/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:30:21 by jetan             #+#    #+#             */
/*   Updated: 2025/09/13 18:00:59 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	Span::shortestSpan()
{
	if (container.size() < 2)
		throw;
	
}

void Span::addNumber(unsigned int num)
{
	if (this->container.size() >= N)
		throw fullException();
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