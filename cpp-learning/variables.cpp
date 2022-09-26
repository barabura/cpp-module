#include <iostream>
#include <string>

namespace ft {


void	variables()
{
	char			c = 'A';
	int				i = 100;
	unsigned int	u = 3000000000;
	long long		l = 9000000000000;
	// char			h[7] = "Nello!";
	std::string 	s = "Hello";
	float			f = 3.56;
	double			d = 0.00105;
	long double		ld = 30.890045;

	std::cout << "\n---Variables---" << std::endl;
	std::cout << "char = " << c << std::endl;
	std::cout << "int = " << i << std::endl;
	std::cout << "unsigned int = " << u << std::endl;
	std::cout << "long long = " << l << std::endl;
	std::cout << "char* = " << s << std::endl;
	std::cout << "string = " << s.append("fgdsfdgs") << std::endl;
	std::cout << "string = " << s << std::endl;
	std::cout << "float = " << f << std::endl;
	std::cout << "double = " << d << std::endl;
	std::cout << "long double = " << ld << std::endl;
	std::cout << "---------------\n" << std::endl;
}

}

// void	var_size()
// {


// }

// void	operations()
// {






// }













int	 main()
{
	ft::variables();
	return (0);
}

// c++ -Wall -Wextra -Werror -std=c++98 variables.cpp -o var