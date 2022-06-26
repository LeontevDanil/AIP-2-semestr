#include <iostream>
#include <cmath>

float RingS(float R1, float R2)
{
    float S1 = pow(R1, 2) * 3.14,
          S2 = pow(R2, 2) * 3.14;

    return S1 - S2;
}

int main()
{
    float R1, R2;

    std::cout << "R1 = ";
    std::cin >> R1;

    std::cout << "R2 = ";
    std::cin >> R2;

    std::cout << RingS(R1, R2);

    return 0;
}