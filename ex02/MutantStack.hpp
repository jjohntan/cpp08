/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:40:25 by jetan             #+#    #+#             */
/*   Updated: 2025/10/08 18:53:23 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <deque>
#include <iostream>

// return: typedef MutantStack<T>::iterator
template <typename T>
typename MutantStack<T>::iterator Mutantstack::begin()
{
	return ;
}

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{	
public:
	// Constructor
	MutantStack();
	// Copy constructor
	MutantStack(const MutantStack &other);
	// Copy assignment operator
	MutantStack &operator=(const MutantStack &other);
	// Destructor
	~MutantStack();
	
	// typedef: alias
	typedef typename Container _iterator;
	iterator begin();
	iterator end();
};

#endif