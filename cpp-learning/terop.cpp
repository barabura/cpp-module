#include <iostream>

int	main()
{
	setlocale(LC_ALL, "");
	int		x = 5;
	int		y = 3;
	char	sign;
	int		result;

	std::cout << "Input operation sign: ";
	std::cin >> sign;
	result = sign == '+' ? x + y : x - y;
	std::cout << "Result: " << result << std::endl;
	return (0); 
}

// c++ -Wall -Wextra -Werror -std=c++98 terop.cpp -o terop