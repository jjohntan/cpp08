/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:30:21 by jetan             #+#    #+#             */
/*   Updated: 2025/09/10 18:22:18 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): N(10000) {}

Span::Span(unsigned int _n)
{
	this->N = _n;
}

Span::Span(const Span &other): N(other.N) {}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		N = other.N;
	}
	return *this;
}

Span::~Span() {}