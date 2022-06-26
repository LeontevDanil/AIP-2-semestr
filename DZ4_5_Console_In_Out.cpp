#include <iostream>
//16 A

int main()
{

	int i, max, t;

	std::cout << "initial value = ";
	std::cin >> i;

	std::cout << "final value = ";
	std::cin >> max;

	std::cout << "tab step = ";
	std::cin >> t;

	for (; i < max; i += t)
	{
		if (i > 0)
			std::cout << "y = " << 2 * i - 10;
		else if (i < 0)
			std::cout << "y = " << 2 * abs(i) - 1;
		else
			std::cout << "y = " << 0;

		std::cout << std::endl;
	}

	return 0;
}