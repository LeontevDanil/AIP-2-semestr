#include <iostream>
#include <array>
//1 g

int main()
{
	srand(0);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
		M[i] = rand() % 41 - 20;

	for (int i = 0; i < 20; i++)
		std::cout << M[i] << ' ';

	return 0;
}