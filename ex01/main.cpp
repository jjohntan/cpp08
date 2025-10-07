/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:44:13 by jetan             #+#    #+#             */
/*   Updated: 2025/10/07 16:25:22 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void manyNumberstest()
{
	std::cout << "---------manyNumberstest----------" << std::endl;
	
	Span sp = Span(42);
	std::vector<int> arr_nbr;
	
	arr_nbr.push_back(32);
	arr_nbr.push_back(28);
	arr_nbr.push_back(54);
	
	try
	{
		sp.addManyNumbers(arr_nbr);
		sp.printValue();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "-----------------------" << std::endl;
	Span sp2 = Span(2);
	std::vector<int> arr_nbr2;
	
	arr_nbr2.push_back(43);
	arr_nbr2.push_back(29);
	arr_nbr2.push_back(93);
	
	try
	{
		sp2.addManyNumbers(arr_nbr2);
		sp2.printValue();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void TenKtest()
{
	std::cout << "---------TenKtest----------" << std::endl;
	
	Span tenk = Span(10000);
	std::vector<int> arr_nbr;
	
	for (int i = 0; i < 10000; i++)
	{
		arr_nbr.push_back(i);
	}
	try
	{
		tenk.addManyNumbers(arr_nbr);
		// tenk.printValue();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void OCFtest()
{
	std::cout << "---------OCFtest----------" << std::endl;
	
	Span dc;
	dc.addNumber(1);
	dc.addNumber(2);
	Span pc(42);
	pc.addNumber(3);
	pc.addNumber(4);
	Span cc(pc);
	Span cao = cc;
	
	std::cout << "Default constructor: " << std::endl;
	dc.printValue();
	std::cout << "Parameter constructor: " << std::endl;
	pc.printValue();
	std::cout << "Copy constructor: " << std::endl;
	cc.printValue();
	std::cout << "Copy assignment operator: " << std::endl;
	cao.printValue();
}

int main()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	OCFtest();
	TenKtest();
	manyNumberstest();
	return 0;
}