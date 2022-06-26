#include <iostream>
#include <array>
//10 

int main()
{
	srand(0);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
		M[i] = rand() % 21 - 10;

	for (int i = 0; i < 20; i++)
		if (M[i] < 0)
			M[i] = 0;

	for (int i = 0; i < 20; i++)
		std::cout << M[i] << ' ';

	return 0;
}