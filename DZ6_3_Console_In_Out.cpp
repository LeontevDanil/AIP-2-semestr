#include <iostream>
#include <array>
//9

int main()
{
	srand(0);

	std::array<int, 20> M;

	for (int i = 0; i < 20; i++)
		M[i] = rand() % 21 - 10;

	int quantity = 0;

	for (int i = 0; i < 20; i++)
		if (M[i] >= 0)
			quantity++;

	std::cout << "the number of positive = " << quantity << std::endl;

	return 0;
}