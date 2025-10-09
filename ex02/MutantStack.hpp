/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:40:25 by jetan             #+#    #+#             */
/*   Updated: 2025/10/09 14:47:51 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

// template class
/**
 * @param T The type of the stored elements.
 * @param Container The type of the underlying container to use to store the elements.
 * 
 * Container c - the underlying container.
 * 
 * The std::stack class is a container adaptor that gives the programmer the functionality of a stack - specifically,
 * a LIFO (last-in, first-out) data structure.
 * 
 * By default, if no container class is specified for a particular stack class instantiation,
 * the standard container std::deque is used(std::stack is not a real container,
 * it's a wrapper(adapter) around other container).
 */
template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{	
public:
	// Constructor
	MutantStack(): std::stack<T, Container>() {}
	
	// Copy constructor
	MutantStack(const MutantStack &other): std::stack<T, Container>(other)
	{
		*this = other;
	}
	
	// Copy assignment operator
	MutantStack &operator=(const MutantStack &other)
	{
		if (this != &other)// prevent self assignment
		{
			this->c = other.c;// copy underlying container
		}
		return *this;
	}
	
	// Destructor
	~MutantStack() {}
	
	// typedef: alias
	typedef typename Container::iterator iterator;
	
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};

#endif