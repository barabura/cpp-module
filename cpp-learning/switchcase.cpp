#include <iostream>

int	main()
{
	int x = 10;

	switch(x)
	{
		case 1:
			std::cout << "x = 1" << std::endl;
			break;
		case 5:
			std::cout << "x = 5" << std::endl;
			break;
		case 10:
			std::cout << "x = 10" << std::endl;
			break;
		
		default:
			std::cout << "x is undefined" << std::endl;
			break;
	}
	return (0);
}

// c++ -Wall -Wextra -Werror -std=c++98 switchcase.cpp -o switchcase