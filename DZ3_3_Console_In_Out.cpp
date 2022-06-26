#include <iostream>
#include <cmath>
//2 L

int main()
{
    float N, min, max;

    std::cout << "Step : ";
    std::cin >> N;

    std::cout << "Start : ";
    std::cin >> min;

    std::cout << "End :";
    std::cin >> max;

    for (int i = min; i < max; i += N)
        std::cout << sqrt(5 * i + 4 * pow(i, 3)) + 4 * i + 3/ sin(9 * i + 71) << std::endl;

    return 0;
}