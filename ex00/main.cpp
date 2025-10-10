/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 20:28:26 by jetan             #+#    #+#             */
/*   Updated: 2025/10/10 14:55:28 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char *NoOccurrenceException::what() const throw()
{
	return "no occurrence is found";
}

int main()
{
	std::vector<int> v;
	
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	
	try
	{
		easyfind(v, 5);
		std::cout << "Found" << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		easyfind(v, 11);
		std::cout << "Found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}