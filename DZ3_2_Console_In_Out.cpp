#include <iostream>
#include <cmath>
//2 G

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
        std::cout << pow(- (2 + 9 * i), 2) + 6 * i << std::endl;

    return 0;
}