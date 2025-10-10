/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:45:55 by jetan             #+#    #+#             */
/*   Updated: 2025/10/10 13:25:48 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void vectorTest()
{
std::cout << "vector test: " << std::endl;
std::vector<int>	mstack;

mstack.push_back(5);
mstack.push_back(17);

std::cout << mstack.back() << std::endl;

mstack.pop_back();// removes an element from the end of the vector

std::cout << mstack.size() << std::endl;

mstack.push_back(3);// add an element at the end of the vector
mstack.push_back(5);
mstack.push_back(737);
//[...]
mstack.push_back(0);

std::vector<int>::iterator it = mstack.begin();
std::vector<int>::iterator ite = mstack.end();

++it;
--it;
while (it != ite)
{
	std::cout << *it << std::endl;
	++it;
}
std::vector<int> s(mstack);
}

void listTest()
{
std::cout << "list test: " << std::endl;
std::list<int>	mstack;

mstack.push_back(5);
mstack.push_back(17);

std::cout << mstack.back() << std::endl;

mstack.pop_back();// remove last element

std::cout << mstack.size() << std::endl;

mstack.push_back(3);// Add an element at the end
mstack.push_back(5);
mstack.push_back(737);
//[...]
mstack.push_back(0);

std::list<int>::iterator it = mstack.begin();
std::list<int>::iterator ite = mstack.end();

++it;
--it;
while (it != ite)
{
	std::cout << *it << std::endl;
	++it;
}
std::list<int> s(mstack);
}

int main()
{
MutantStack<int>	mstack;

mstack.push(5);
mstack.push(17);

std::cout << mstack.top() << std::endl;

mstack.pop();

std::cout << mstack.size() << std::endl;

mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);

MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();

++it;
--it;
while (it != ite)
{
	std::cout << *it << std::endl;
	++it;
}
std::stack<int> s(mstack);
listTest();
vectorTest();
return 0;
}