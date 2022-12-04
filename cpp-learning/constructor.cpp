#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

class Person
{
public:
	string	name;
	int		age;
	
	Person(string n, int a)
	{
		name = n;
		age = a;
	}

	Person(string n)
	{
		name = n;
		age = 18;
	}
	
	Person()
	{
		name = "Bob";
		age = 18;
	}

	void	move()
	{
		cout << name << " is moving" << endl;
	}
};

// permitted only in c++11
// class Person
// {
// public:
// 	string	name;
// 	int		age;
	
// 	Person(string n, int a)
// 	{
// 		name = n;
// 		age = a;
// 		cout << "First constructor" << endl;
// 	}

// 	Person(string n) : Person (n, 18)
// 	{
// 		cout << "Second constructor" << endl;
// 	}
	
// 	Person() : Person("Bob")
// 	{
// 		cout << "Third constructor" << endl;
// 	}

// 	void	move()
// 	{
// 		cout << name << " is moving" << endl;
// 	}
// };

int	main()
{
	Person Tom("Tom", 22);
	cout << "Name: " << Tom.name << "\tAge: " << Tom.age << endl;
	Person Sam("Sam");
	cout << "Name: " << Sam.name << "\tAge: " << Sam.age << endl;
	Person Bob = Person();
	cout << "Name: " << Bob.name << "\tAge: " << Bob.age << endl;
	return (0);
}

// c++ -Wall -Wextra -Werror -std=c++98 constructor.cpp -o constructor
