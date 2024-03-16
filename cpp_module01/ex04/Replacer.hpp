/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:54:56 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/12 15:59:33 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

#include <string>
#include <fstream>
#include <iostream>

class Replacer
{
private:
	std::string filename;
	std::string s1;
	std::string s2;
public:
	Replacer(std::string filename, std::string s1, std::string s2);
	~Replacer();
	void replace(void) const;
};

#endif