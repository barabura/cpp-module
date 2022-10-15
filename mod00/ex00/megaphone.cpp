/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baura <baura@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:28:41 by baura             #+#    #+#             */
/*   Updated: 2022/10/15 20:00:19 by baura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int counter = 0;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++counter < argc)
		{
			std::string param = argv[counter];
			for (int i = 0; i < (int)param.length(); i++)
			{
				std::cout << (char)(std::toupper(param[i]));
			}
		}	
		std::cout << std::endl;
	}
	return (0);
}

/*
using std::cout;
using std::endl;
using std::string;
*/