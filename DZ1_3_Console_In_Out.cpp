#include <iostream>
//5

int main()
{
    int n1, n2, n3;

    std::cout << "Namber 1: ";

    std::cin >> n1;

    std::cout << "Namber 2: ";

    std::cin >> n2;

    std::cout << "Namber 3: ";

    std::cin >> n3;

    n1 *= 2;

    n2 -= 3;

    n3 *= n3;

    std::cout << "sum = " << n1 + n2 + n3 << std::endl;

    return 0;
}