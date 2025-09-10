/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:50:32 by jetan             #+#    #+#             */
/*   Updated: 2025/09/10 18:22:40 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

class Span
{
private:
	unsigned int N;
	
public:
	Span();
	Span(unsigned int _n);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	// addNumber();
	// shortestSpan();
	// longestSpan();
	
	class Exception: public std::exception
	{
		public:
			const char *what() const throw();
	};
};

#endif