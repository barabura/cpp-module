#include <iostream>
#include <string>

void	var_size(char c, int i, unsigned int u, long long l, char *h, float f, double d, long double ld)
{
	std::cout << "--Variables sizes--" << std::endl; 
	std::cout << "sizeof (c) = " << sizeof(c) << std::endl; 
	std::cout << "sizeof (i) = " << sizeof(i) << std::endl; 
	std::cout << "sizeof (u) = " << sizeof(u) << std::endl; 
	std::cout << "sizeof (l) = " << sizeof(l) << std::endl; 
	std::cout << "sizeof (h) = " << sizeof(h) << std::endl; 
	std::cout << "sizeof (f) = " << sizeof(f) << std::endl; 
	std::cout << "sizeof (d) = " << sizeof(d) << std::endl; 
	std::cout << "sizeof (ld) = " << sizeof(ld) << std::endl;
}

void	operations(int i)
{
	int	div = i / 4;
	int res = i % 15;
	int	mult = i * 4.5;
	int sum = i + 33;
	int dif = i - 55;

	std::cout << "\n---Operations results---" << std::endl;
	std::cout << "division = " << div << std::endl;
	std::cout << "residual = " << res << std::endl;
	std::cout << "multiple = " << mult << std::endl;
	std::cout << "sum = " << sum << std::endl;
	std::cout << "difference = " << dif << std::endl;
}

namespace ft {

void	variables()
{
	char			c = 'A';
	int				i = 100;
	unsigned int	u = 3000000000;
	long long		l = 9000000000000;
	char			h[7] = "Nello!";
	// std::string 	s = "Hello";
	float			f = 3.56;
	double			d = 0.00105;
	long double		ld = 30.890045;

	std::cout << "\n---Variables---" << std::endl;
	std::cout << "char = " << c << std::endl;
	std::cout << "int = " << i << std::endl;
	std::cout << "unsigned int = " << u << std::endl;
	std::cout << "long long = " << l << std::endl;
	std::cout << "char* = " << h << std::endl;
	// std::cout << "string = " << s.append("fgdsfdgs") << std::endl;
	// std::cout << "string = " << s << std::endl; 
	std::cout << "float = " << f << std::endl;
	std::cout << "double = " << d << std::endl;
	std::cout << "long double = " << ld << std::endl;
	std::cout << "---------------\n" << std::endl;
	var_size(c, i, u, l, h, f, d, ld);
	operations(i);
}

}

int	 main()
{
	ft::variables();
	return (0);
}

// c++ -Wall -Wextra -Werror -std=c++98 variables.cpp -o var