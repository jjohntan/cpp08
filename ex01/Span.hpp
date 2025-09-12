/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:50:32 by jetan             #+#    #+#             */
/*   Updated: 2025/09/12 18:29:08 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

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
	// shortestSpan();
	// longestSpan();
	// addManyNumbers();
		
	class fullException: public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif