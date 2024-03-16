/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:31:39 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 15:43:34 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int		main(void)
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << animal->getType() << std::endl;
	animal->makeSound();
	std::cout << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << cat->getType() << std::endl;
	cat->makeSound();

	delete animal;
	delete dog;
	delete cat;

	//Same tests with wrong classes

	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_dog = new WrongDog();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << wrong_animal->getType() << std::endl;
	wrong_animal->makeSound();
	std::cout << wrong_dog->getType() << std::endl;
	wrong_dog->makeSound();
	std::cout << wrong_cat->getType() << std::endl;
	wrong_cat->makeSound();

	delete wrong_animal;
	delete wrong_dog;
	delete wrong_cat;

	return (0);
}