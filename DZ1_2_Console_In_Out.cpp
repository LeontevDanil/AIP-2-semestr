#include <iostream>
//2 g

int main()
{
    int r, l;

    std::cout << "radius of the base circle: ";

    std::cin >> r;

    std::cout << "length of the generatrix: ";

    std::cin >> l;

    std::cout << "S = " << 3.14 * r * (r + l) << std::endl;

    return 0;
}