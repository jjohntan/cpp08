/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:30:21 by jetan             #+#    #+#             */
/*   Updated: 2025/09/12 18:30:16 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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

Span::Span(const Span &other): N(other.N) ,container(other) {}

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