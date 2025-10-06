/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:50:32 by jetan             #+#    #+#             */
/*   Updated: 2025/10/06 17:23:55 by jetan            ###   ########.fr       */
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
	void addNumber(int num);
	int shortestSpan();
	int longestSpan();
	void addManyNumbers(std::vector<int> nbr);
	void printValue();
	
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