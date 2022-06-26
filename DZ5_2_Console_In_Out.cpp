#include <iostream>
//2 A

struct num
{
    int material,
        imaginary;
};

int module(num N)
{
    return sqrt(pow(N.material, 2) + pow(N.imaginary, 2));
}

int main()
{
    num Num;

    std::cout << "Enter Num material namber: ";
    std::cin >> Num.material;

    std::cout << "Enter Num imaginary namber: ";
    std::cin >> Num.imaginary;

    std::cout << "module numbers = " << module(Num) << std::endl;

    return 0;
}