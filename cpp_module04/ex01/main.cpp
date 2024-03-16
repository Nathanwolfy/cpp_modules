/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:31:39 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 16:27:04 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define NB_ANIMALS 10

int		main(void)
{
	//Tests with table of pointers to Animals
	const Animal* Animals[NB_ANIMALS];

	for (int i = 0; i < NB_ANIMALS; i++)
	{
		if (i % 2 == 0)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}

	for (int i = 0; i < NB_ANIMALS; i++)
	{
		Animals[i]->makeSound();
		delete Animals[i];
	}

	//Tests to check if deep copies are made

	const Cat cat1;
	const Cat cat2 = cat1;
	const Cat cat3 = Cat(cat1);

	std::cout << "cat1's brain address: " << cat1.getBrain() << std::endl;
	std::cout << "cat2's brain address: " << cat2.getBrain() << std::endl;
	std::cout << "cat3's brain address: " << cat3.getBrain() << std::endl;

	std::cout << "cat1's first idea address: " << &(cat1.getBrain()->getIdeas()[0]) << std::endl;
	std::cout << "cat2's first idea address: " << &(cat2.getBrain()->getIdeas()[0]) << std::endl;
	std::cout << "cat3's first idea address: " << &(cat3.getBrain()->getIdeas()[0]) << std::endl;

	std::cout << "cat1's first idea: " << cat1.getBrain()->getIdeas()[0] << std::endl;
	std::cout << "cat2's first idea: " << cat2.getBrain()->getIdeas()[0] << std::endl;
	std::cout << "cat3's first idea: " << cat3.getBrain()->getIdeas()[0] << std::endl;

	std::cout << "cat1's second idea address: " << &(cat1.getBrain()->getIdeas()[1]) << std::endl;
	std::cout << "cat2's second idea address: " << &(cat2.getBrain()->getIdeas()[1]) << std::endl;
	std::cout << "cat3's second idea address: " << &(cat3.getBrain()->getIdeas()[1]) << std::endl;

	std::cout << "cat1's second idea: " << cat1.getBrain()->getIdeas()[1] << std::endl;
	std::cout << "cat2's second idea: " << cat2.getBrain()->getIdeas()[1] << std::endl;
	std::cout << "cat3's second idea: " << cat3.getBrain()->getIdeas()[1] << std::endl;

	return (0);
}