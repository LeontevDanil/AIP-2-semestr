#include <iostream>
#include <cmath>
//3 g

int main()
{
	float X, n, y = 0;

	std::cin >> n >> X;

	for (int i = 1; i <= n; i++)
		if (i % 2 == 0)
			y += 1 / (i * X);
		else
			y -= 1 / (i * X);

	std::cout << y << std::endl;

    return 0;
}