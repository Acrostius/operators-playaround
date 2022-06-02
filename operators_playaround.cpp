#include <iostream>
#include <cmath>

int isEven(int x);

int main()
{
	int x, y;
	int a = 3, b = 5, c = 1, d = 9, z = 2;

	// Precedence Testing.
	x = ((3 + 4) + 5);        // operator+ has L->R Precedence.
	std::cout << x << '\n';
	
	x = (y = z);		  	  // operator= has R->L Precedence.
	std::cout << x << '\n';

	z *= ((++y) + 5);		  // operator++ has lower Precedence than operator+.
	std::cout << z << '\n';

	(a || (b && c)) || d;	  // operator&& has lower Precedence than operator|| and || has L->R Precedence.
	std::cout << d << '\n';

	int staticCastX{ 7 };
	int staticCastY{ 4 };

	// Using static_cast to do floating-point division instead of integer division.
	std::cout << "integer / integer = " << staticCastX / staticCastY << '\n';
	std::cout << "double / integer = " << static_cast<double>(staticCastX) / staticCastY << '\n';
	std::cout << "integer / double = " << staticCastX / static_cast<double>(staticCastY) << '\n';
	std::cout << "double / double = " << static_cast<double>(staticCastX) / static_cast<double>(staticCastY) << '\n';

	// Division by 0. ( Will cause Error C2124(Division or mod by 0) on Visual Studio ).
	//std::cout << "23 / 0 = " << 23 / 0 << '\n';

	// Modulus Operator
	int divisionX = 0;
	int divisionY = 0;

	std::cout << "Enter a number: ";
	std::cin >> divisionX;
	std::cout << "Enter another number: ";
	std::cin >> divisionY;

	if ((divisionX % divisionY) == 0)
	{
		std::cout << divisionX << " / " << divisionY << " is even.\n";
	}
	else
	{
		std::cout << divisionX << " / " << divisionY << " isn't even.\n";
	}

	// Exponent operator (^)
	int exponentValue = std::pow(3.0, 6.0);
	std::cout << "3.0 to the power of 6.0 is " << exponentValue << '\n';

	
	// Ask user for input and do odd or even game.

	int integerX = 0;
	
	std::cout << "Enter a integer: ";
	std::cin >> integerX;

	isEven(integerX);

	return 0;
}

// Check if given integer is a even or odd number.
int isEven(int x)
{
	if ((x % 2) == 0)
	{
		std::cout << x << " is even.\n";
	}
	else
	{
		std::cout << x << " is odd.\n";
	}

	return x;
}