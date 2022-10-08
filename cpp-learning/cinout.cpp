#include <iostream>

int main()
{
	int	age;
	double weight;

	std::cout << "Input age: ";
	// std::cin >> age;
	// std::cout << "Input weight: ";
	// std::cin >> weight;
	std::cin >> age >> weight;
	
	std::cout << "Your age: " << age << "\t your weight: " << weight << std::endl;
	return (0);
}

// c++ -Wall -Wextra -Werror -std=c++98 cinout.cpp -o cinout 