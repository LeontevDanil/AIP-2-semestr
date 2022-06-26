#include <iostream>
//1 G

int main()
{
    int x;

    std::cout << "enter x : ";

    std::cin >> x;

    std::cout << "y = ";

    if (x > -8)
        std::cout << pow(2 + x, 2) + 7 << std::endl;
    else if (x < -8)
        std::cout << abs(2 * x - 1) - 1 << std::endl;
    else 
        std::cout << 5 << std::endl;
    
    return 0;
}