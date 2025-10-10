/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:28:30 by jetan             #+#    #+#             */
/*   Updated: 2025/10/10 14:18:29 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <iostream>

class NoOccurrenceException: public std::exception
{
public:
	const char *what() const throw();
};

/**
 * Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.), by "pointing" to them.
 * It is called an "iterator" because "iterating" is the technical term for looping.
 */
template <typename T>
void easyfind(T &container, int occurrence)
{
	typename T::iterator i;
	
	// find searches for an element equal to value (using operator==).
	i = std::find(container.begin(), container.end(), occurrence);
	
	if (i == container.end())
	{
		throw NoOccurrenceException();
		return;
	}
}

#endif