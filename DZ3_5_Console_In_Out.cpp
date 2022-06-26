#include <iostream>
#include <cmath>
//11

int main()
{
    float A, B, X, n = 0;

    std::cout << "A: ";
    std::cin >> A;

    std::cout << "B:";
    std::cin >> B;

    std::cout << "X: ";
    std::cin >> X;

    X /= 100;

    while (A <= B)
    {
        n++;
        A *= X;
    }

    std::cout << "answer: " << n << std::endl;

    return 0;
}