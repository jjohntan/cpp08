/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:50:32 by jetan             #+#    #+#             */
/*   Updated: 2025/09/17 16:09:57 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

// Span = distance
class Span
{
private:
	unsigned int N;// store a maximum of N integers
	std::vector<int> container;
public:
	//Orthodox Canonical Form
	Span();
	Span(unsigned int _n);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	void addNumber(unsigned int num);
	int shortestSpan();
	// longestSpan();
	// addManyNumbers();
		
	class fillException: public std::exception
	{
		public:
			const char *what() const throw();
	};
	
	class notFoundException: public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif