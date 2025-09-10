/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:28:30 by jetan             #+#    #+#             */
/*   Updated: 2025/07/06 16:26:51 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>

template <typename T>
void easyfind(T &container, int occurrence)
{
	typename T::iterator i;
	i = std::find(container.begin(), container.end(), occurrence);
	if (i == container.end())
	{
		std::cout << "hello" << std::endl;
	}
}

#endif