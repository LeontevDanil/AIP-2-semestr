#include <iostream>
//3 g

int main()
{
	int A, k = 0;

	std::cin >> A;

	for (int i = 100; i < 999; i++)
		if ((i / 100 + i / 10 % 10 + i % 10) == A)
			k++;

	std::cout << k << std::endl;

    return 0;
}